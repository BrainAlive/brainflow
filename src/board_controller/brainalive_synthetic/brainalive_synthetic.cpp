#include <string>

#include "brainalive_synthetic.h"
#include <iostream>
#include <fstream>
#include <string>
#include "custom_cast.h"
#include "get_dll_dir.h"
#include "timestamp.h"


// common constants
#define BRAINALIVE_PACKET_SIZE 16

// info about services and chars
#define START_BYTE 0x0A
#define STOP_BYTE 0x0D

std::ifstream myfile;
std::string mystring;

BrainAlive_Synthetic::BrainAlive_Synthetic (struct BrainFlowInputParams params)
    : Board ((int)BoardIds::BRAINALIVE_SYNTHETIC_BOARD, params)
{
    initialized = false;
    brainalive_adapter = NULL;
    brainalive_peripheral = NULL;
    is_streaming = false;
}

BrainAlive_Synthetic::~BrainAlive_Synthetic ()
{
    skip_logs = true;
    release_session ();
}

int BrainAlive_Synthetic::prepare_session ()
{
    if (initialized)
    {
        safe_logger (spdlog::level::info, "Session is already prepared");
        return (int)BrainFlowExitCodes::STATUS_OK;
    }

    initialized = true;
    return (int)BrainFlowExitCodes::STATUS_OK;
}

int BrainAlive_Synthetic::start_stream (int buffer_size, const char *streamer_params)
{
    if (is_streaming)
    {
        safe_logger (spdlog::level::err, "Streaming thread already running");
        return (int)BrainFlowExitCodes::STREAM_ALREADY_RUN_ERROR;
    }
    int res = prepare_for_acquisition (buffer_size, streamer_params);
    if (res != (int)BrainFlowExitCodes::STATUS_OK)
    {
        return res;
    }

    keep_alive = true;
    streaming_thread = std::thread ([this] { this->read_data (); });
    is_streaming = true;
    return (int)BrainFlowExitCodes::STATUS_OK;

}

int BrainAlive_Synthetic::stop_stream ()
{
    if (is_streaming)
    {
        keep_alive = false;
        is_streaming = false;
        streaming_thread.join ();
        return (int)BrainFlowExitCodes::STATUS_OK;
    }
    else
    {
        return (int)BrainFlowExitCodes::STREAM_THREAD_IS_NOT_RUNNING;
    }
}

int BrainAlive_Synthetic::release_session ()
{
    if (initialized)
    {
        stop_stream ();
        free_packages ();
        initialized = false;
    }
    return (int)BrainFlowExitCodes::STATUS_OK;
}

int BrainAlive_Synthetic::config_board (std::string config, std::string &response)
{
    return (int)BrainFlowExitCodes::STATUS_OK;
}

void BrainAlive_Synthetic::read_data ()
{
    
    myfile.open (params.file.c_str());
    std::string data[50]; 
    double n_data[15];
    if (myfile.is_open ())
    {
        std::getline (myfile, mystring);
        
        while (!myfile.eof ())
        {   
            myfile >> mystring;
            int i = 0;   
            std::stringstream string_stream (mystring);
            while (string_stream.good ()) // loop will continue if string stream is error free
            {
                std::string a;
                getline (string_stream, a, ','); // calling getline fuction
                data[i] = a;
                i++;
            }
            for (int j = 4; j < 12; j++)
            {
                n_data[j] = atof (data[j].c_str ());
                //std::cout << n_data[j] << " ";
            }
            n_data[9] = atof (data[13].c_str ());
            //std::cout << "\n";
            n_data[10] = get_timestamp ();
            push_package (&n_data[0]); // pipe stream's content to standard output
        }
        myfile.close ();
    }
    
}
