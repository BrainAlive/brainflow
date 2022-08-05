#include <condition_variable>
#include <mutex>
#include <thread>

#include "ble_lib_board.h"
#include "board.h"
#include "board_controller.h"

class BrainAlive_Synthetic : public Board
{
public:
    BrainAlive_Synthetic (struct BrainFlowInputParams params);
    ~BrainAlive_Synthetic ();

    int prepare_session ();
    int start_stream (int buffer_size, const char *streamer_params);
    int stop_stream ();
    int release_session ();
    int config_board (std::string config, std::string &response);

    void adapter_1_on_scan_found (simpleble_adapter_t adapter, simpleble_peripheral_t peripheral);
    void read_data ();

private:
    volatile bool keep_alive;
    bool initialized;
    bool is_streaming;
    std::thread streaming_thread;

protected:
    volatile simpleble_adapter_t brainalive_adapter;
    volatile simpleble_peripheral_t brainalive_peripheral;
    std::mutex m;
    std::condition_variable cv;
    std::pair<simpleble_uuid_t, simpleble_uuid_t> notified_characteristics;
    std::pair<simpleble_uuid_t, simpleble_uuid_t> write_characteristics;
};
