#include "brainflow_boards.h"


// clang-format off

/* For all real boards there are four required fields:
 *   name
 *   num_rows
 *   timestamp_channel
 *   marker_channel
 * Nice to set:
 *   package_num
 *   sampling_rate
 * Everything else is optional and up to device
*/

json brainflow_boards_json = {
    {"boards", {
        {"-3",
            {{"name", "PlayBack"}
        }},
        {"-2",
            {{"name", "Streaming"}
        }},
        {"-1",
            {{"name", "Synthetic"},
            {"sampling_rate", 250},
            {"package_num_channel", 0},
            {"battery_channel", 29},
            {"timestamp_channel", 30},
            {"marker_channel", 31},
            {"num_rows", 32},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eeg_names", "Fz,C3,Cz,C4,Pz,PO7,Oz,PO8,F5,F7,F3,F1,F2,F4,F6,F8"},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eog_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"accel_channels", {17, 18, 19}},
            {"gyro_channels", {20, 21, 22}},
            {"eda_channels", {23}},
            {"ppg_channels", {24, 25}},
            {"temperature_channels", {26}},
            {"resistance_channels", {27, 28}}
        }},
        {"0",
            {{"name", "Cyton"},
            {"sampling_rate", 250},
            {"package_num_channel", 0},
            {"timestamp_channel", 22},
            {"marker_channel", 23},
            {"num_rows", 24},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"eeg_names", "Fp1,Fp2,C3,C4,P7,P8,O1,O2"},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"eog_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"accel_channels", {9, 10, 11}},
            {"analog_channels", {19, 20, 21}},
            {"other_channels", {12, 13, 14, 15, 16, 17, 18}}
        }},
        {"1",
            {{"name", "Ganglion"},
            {"sampling_rate", 200},
            {"package_num_channel", 0},
            {"timestamp_channel", 13},
            {"marker_channel", 14},
            {"num_rows", 15},
            {"eeg_channels", {1, 2, 3, 4}},
            {"emg_channels", {1, 2, 3, 4}},
            {"ecg_channels", {1, 2, 3, 4}},
            {"eog_channels", {1, 2, 3, 4}},
            {"accel_channels", {5, 6, 7}},
            {"resistance_channels", {8, 9, 10, 11, 12}}
        }},
        {"2",
            {{"name", "CytonDaisy"},
            {"sampling_rate", 125},
            {"package_num_channel", 0},
            {"timestamp_channel", 30},
            {"marker_channel", 31},
            {"num_rows", 32},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eeg_names", "Fp1,Fp2,C3,C4,P7,P8,O1,O2,F7,F8,F3,F4,T7,T8,P3,P4"},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eog_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"accel_channels", {17, 18, 19}},
            {"analog_channels", {27, 28, 29}},
            {"other_channels", {20, 21, 22, 23, 24, 25, 26}}
        }},
        {"3",
            {{"name", "Galea"},
            {"sampling_rate", 250},
            {"package_num_channel", 0},
            {"timestamp_channel", 24},
            {"marker_channel", 25},
            {"num_rows", 26},
            {"battery_channel", 23},
            {"eeg_channels", {7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eeg_names", "FP1,FP2,Fz,Cz,Pz,Oz,P3,P4,O1,O2"},
            {"emg_channels", {1, 2, 3, 4}},
            {"eog_channels", {5, 6}},
            {"eda_channels", {19}},
            {"ppg_channels", {17, 18}},
            {"other_channels", {21, 22}},
            {"temperature_channels", {20}}
        }},
        {"4",
            {{"name", "GanglionWifi"},
            {"sampling_rate", 1600},
            {"package_num_channel", 0},
            {"timestamp_channel", 23},
            {"marker_channel", 24},
            {"num_rows", 25},
            {"eeg_channels", {1, 2, 3, 4}},
            {"emg_channels", {1, 2, 3, 4}},
            {"ecg_channels", {1, 2, 3, 4}},
            {"eog_channels", {1, 2, 3, 4}},
            {"accel_channels", {5, 6, 7}},
            {"analog_channels", {15, 16, 17}},
            {"other_channels", {8, 9, 10, 11, 12, 13, 14}},
            {"resistance_channels", {18, 19, 20, 21, 22}}
        }},
        {"5",
            {{"name", "CytonWifi"},
            {"sampling_rate", 1000},
            {"package_num_channel", 0},
            {"timestamp_channel", 22},
            {"marker_channel", 23},
            {"num_rows", 24},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"eog_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"accel_channels", {9, 10, 11}},
            {"analog_channels", {19, 20, 21}},
            {"other_channels", {12, 13, 14, 15, 16, 17, 18}}
        }},
        {"6",
            {{"name", "CytonDaisyWifi"},
            {"sampling_rate", 1000},
            {"package_num_channel", 0},
            {"timestamp_channel", 30},
            {"marker_channel", 31},
            {"num_rows", 32},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eog_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"accel_channels", {17, 18, 19}},
            {"analog_channels", {27, 28, 29}},
            {"other_channels", {20, 21, 22, 23, 24, 25, 26}}
        }},
        {"7",
            {{"name", "BrainBit"},
            {"sampling_rate", 250},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"battery_channel", 9},
            {"num_rows", 12},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "T3,T4,O1,O2"},
            {"resistance_channels", {5, 6, 7, 8}}
        }},
        {"8",
            {{"name", "Unicorn"},
            {"sampling_rate", 250},
            {"timestamp_channel", 17},
            {"marker_channel", 18},
            {"package_num_channel", 15},
            {"num_rows", 19},
            {"eeg_channels", {0, 1, 2, 3, 4, 5, 6, 7}},
            {"eeg_names", "Fz,C3,Cz,C4,Pz,PO7,Oz,PO8"},
            {"accel_channels", {8, 9, 10}},
            {"gyro_channels", {11, 12, 13}},
            {"other_channels", {16}},
            {"battery_channel", 14}
        }},
        {"9",
            {{"name", "CallibriEEG"},
            {"sampling_rate", 250},
            {"timestamp_channel", 2},
            {"marker_channel", 3},
            {"package_num_channel", 0},
            {"num_rows", 4},
            {"eeg_channels", {1}}
        }},
        {"10",
            {{"name", "CallibriEMG"},
            {"sampling_rate", 1000},
            {"timestamp_channel", 2},
            {"marker_channel", 3},
            {"package_num_channel", 0},
            {"num_rows", 4},
            {"emg_channels", {1}}
        }},
        {"11",
            {{"name", "CallibriECG"},
            {"sampling_rate", 125},
            {"timestamp_channel", 2},
            {"marker_channel", 3},
            {"package_num_channel", 0},
            {"num_rows", 4},
            {"ecg_channels", {1}}
        }},
        {"12",
            {{"name", "Fascia"},
            {"sampling_rate", 500},
            {"package_num_channel", 0},
            {"timestamp_channel", 19},
            {"marker_channel", 29},
            {"num_rows", 21},
            {"eeg_channels", {2, 3, 4, 5, 6, 7, 8, 9}},
            {"accel_channels", {10, 11, 12}},
            {"gyro_channels", {13, 14, 15}},
            {"eda_channels", {16}},
            {"ppg_channels", {18}},
            {"temperature_channels", {17}},
            {"other_channels", {1}}
        }},
        {"13",
            {{"name", "NotionOSC1"},
            {"sampling_rate", 250},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"num_rows", 12},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"eeg_names", "CP6,F6,C4,CP4,CP3,F5,C3,CP5"},
            {"other_channels", {9}}
        }},
        {"14",
            {{"name", "NotionOSC2"},
            {"sampling_rate", 250},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"num_rows", 12},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"eeg_names", "CP5,F5,C3,CP3,CP6,F6,C4,CP4"},
            {"other_channels", {9}}
        }},
        {"15",
            {{"name", "IronBCI"},
            {"sampling_rate", 250},
            {"timestamp_channel", 9},
            {"marker_channel", 10},
            {"package_num_channel", 0},
            {"num_rows", 11},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8}}
        }},
        {"16",
            {{"name", "GforcePro"},
            {"sampling_rate", 500},
            {"package_num_channel", 0},
            {"timestamp_channel", 9},
            {"marker_channel", 10},
            {"num_rows", 11},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8}}
        }},
        {"17",
            {{"name", "FreeEEG32"},
            {"sampling_rate", 512},
            {"timestamp_channel", 33},
            {"marker_channel", 34},
            {"package_num_channel", 0},
            {"num_rows", 35},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}}
        }},
        {"18",
            {{"name", "BrainBitBLED"},
            {"sampling_rate", 250},
            {"battery_channel", 5},
            {"timestamp_channel", 6},
            {"marker_channel", 7},
            {"package_num_channel", 0},
            {"num_rows", 8},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "T3,T4,O1,O2"}
        }},
        {"19",
            {{"name", "GforceDual"},
            {"sampling_rate", 500},
            {"timestamp_channel", 3},
            {"marker_channel", 4},
            {"package_num_channel", 0},
            {"num_rows", 5},
            {"emg_channels", {1, 2}}
        }},
        {"20",
            {{"name", "GaleaSerial"},
            {"sampling_rate", 250},
            {"package_num_channel", 0},
            {"timestamp_channel", 24},
            {"marker_channel", 25},
            {"num_rows", 26},
            {"battery_channel", 23},
            {"eeg_channels", {7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"eeg_names", "FP1,FP2,Fz,Cz,Pz,Oz,P3,P4,O1,O2"},
            {"emg_channels", {1, 2, 3, 4}},
            {"eog_channels", {5, 6}},
            {"eda_channels", {19}},
            {"ppg_channels", {17, 18}},
            {"other_channels", {21, 22}},
            {"temperature_channels", {20}}
        }},
        {"21",
            {{"name", "MuseSBLED"},
            {"sampling_rate", 256},
            {"timestamp_channel", 14},
            {"marker_channel", 15},
            {"package_num_channel", 0},
            {"num_rows", 16},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "TP9,Fp1,Fp2,TP10"},
            {"accel_channels", {5, 6, 7}},
            {"gyro_channels", {8, 9, 10}},
            {"ppg_channels", {11, 12, 13}}
        }},
        {"22",
            {{"name", "Muse2BLED"},
            {"sampling_rate", 256},
            {"timestamp_channel", 14},
            {"marker_channel", 15},
            {"package_num_channel", 0},
            {"num_rows", 16},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "TP9,Fp1,Fp2,TP10"},
            {"accel_channels", {5, 6, 7}},
            {"gyro_channels", {8, 9, 10}},
            {"ppg_channels", {11, 12, 13}}
        }},
        {"23",
            {{"name", "CrownOSC"},
            {"sampling_rate", 256},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"num_rows", 12},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"eeg_names", "CP3,C3,F5,PO3,PO4,F6,C4,CP4"},
            {"other_channels", {9}}
        }},
        {"24",
            {{"name", "AntNeuroEE410"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"num_rows", 12},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"other_channels", {9}}
        }},
        {"25",
            {{"name", "AntNeuroEE411"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"num_rows", 12},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"other_channels", {9}}
        }},
        {"26",
            {{"name", "AntNeuroEE430"},
            {"sampling_rate", 512},
            {"timestamp_channel", 10},
            {"marker_channel", 11},
            {"package_num_channel", 0},
            {"num_rows", 12},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"other_channels", {9}}
        }},
        {"27",
            {{"name", "AntNeuroEE211"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 66},
            {"marker_channel", 67},
            {"package_num_channel", 0},
            {"num_rows", 68},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
                32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64}},
            {"other_channels", {65}}
        }},
        {"28",
            {{"name", "AntNeuroEE212"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 34},
            {"marker_channel", 35},
            {"package_num_channel", 0},
            {"num_rows", 36},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}},
            {"other_channels", {33}}
        }},
        {"29",
            {{"name", "AntNeuroEE213"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 18},
            {"marker_channel", 19},
            {"package_num_channel", 0},
            {"num_rows", 20},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"other_channels", {17}}
        }},
        {"30",
            {{"name", "AntNeuroEE214"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 58},
            {"marker_channel", 59},
            {"package_num_channel", 0},
            {"num_rows", 60},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}},
            {"emg_channels", {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56}},
            {"other_channels", {57}}
        }},
        {"31",
            {{"name", "AntNeuroEE215"},
            {"sampling_rate", 2000},
            {"timestamp_channel", 90},
            {"marker_channel", 91},
            {"package_num_channel", 0},
            {"num_rows", 92},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
                32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64}},
            {"emg_channels", {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88}},
            {"other_channels", {89}}
        }},
        {"32",
            {{"name", "AntNeuroEE221"},
            {"sampling_rate", 16000},
            {"timestamp_channel", 18},
            {"marker_channel", 19},
            {"package_num_channel", 0},
            {"num_rows", 20},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}},
            {"other_channels", {17}}
        }},
        {"33",
            {{"name", "AntNeuroEE222"},
            {"sampling_rate", 16000},
            {"timestamp_channel", 34},
            {"marker_channel", 35},
            {"package_num_channel", 0},
            {"num_rows", 36},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}},
            {"other_channels", {33}}
        }},
        {"34",
            {{"name", "AntNeuroEE223"},
            {"sampling_rate", 16000},
            {"timestamp_channel", 58},
            {"marker_channel", 59},
            {"package_num_channel", 0},
            {"num_rows", 60},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}},
            {"emg_channels", {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56}},
            {"other_channels", {57}}
        }},
        {"35",
            {{"name", "AntNeuroEE224"},
            {"sampling_rate", 16000},
            {"timestamp_channel", 66},
            {"marker_channel", 67},
            {"package_num_channel", 0},
            {"num_rows", 68},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
                32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64}},
            {"other_channels", {65}}
        }},
        {"36",
            {{"name", "AntNeuroEE225"},
            {"sampling_rate", 16000},
            {"timestamp_channel", 90},
            {"marker_channel", 91},
            {"package_num_channel", 0},
            {"num_rows", 92},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
                32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64}},
            {"emg_channels", {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88}},
            {"other_channels", {89}}
        }},
        {"37",
            {{"name", "Enophone"},
            {"sampling_rate", 250},
            {"timestamp_channel", 5},
            {"marker_channel", 6},
            {"package_num_channel", 0},
            {"num_rows", 7},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "A2,A1,C4,C3"}
        }},
        {"38",
            {{"name", "Muse2"},
            {"sampling_rate", 256},
            {"timestamp_channel", 14},
            {"marker_channel", 15},
            {"package_num_channel", 0},
            {"num_rows", 16},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "TP9,Fp1,Fp2,TP10"},
            {"accel_channels", {5, 6, 7}},
            {"gyro_channels", {8, 9, 10}},
            {"ppg_channels", {11, 12, 13}}
        }},
        {"39",
            {{"name", "MuseS"},
            {"sampling_rate", 256},
            {"timestamp_channel", 14},
            {"marker_channel", 15},
            {"package_num_channel", 0},
            {"num_rows", 16},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "TP9,Fp1,Fp2,TP10"},
            {"accel_channels", {5, 6, 7}},
            {"gyro_channels", {8, 9, 10}},
            {"ppg_channels", {11, 12, 13}}
        }},
        {"40",
            {{"name", "BrainAlive"},
            {"sampling_rate", 250},
            {"package_num_channel", 17},
            {"Battery_channel", 18},
            {"timestamp_channel", 19},
            {"marker_channel", 20},
            {"num_rows", 21},
            {"eeg_channels", {0, 1, 2, 3, 4, 5, 6, 7}},
            {"eeg_names", "F7,FT7,T7,CP5,CZ,C6,FC6,F4"},
            {"fnirs_channels", {8, 9, 10, 11, 12, 13}},
            {"accel_channels", {14, 15, 16}},
	    }},
        {"41",
            {{"name", "Muse2016"},
            {"sampling_rate", 256},
            {"timestamp_channel", 11},
            {"marker_channel", 12},
            {"package_num_channel", 0},
            {"num_rows", 13},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "TP9,Fp1,Fp2,TP10"},
            {"accel_channels", {5, 6, 7}},
            {"gyro_channels", {8, 9, 10}}
        }},
   	    {"42",
            {{"name", "Muse2016BLED"},
            {"sampling_rate", 256},
            {"timestamp_channel", 11},
            {"marker_channel", 12},
            {"package_num_channel", 0},
            {"num_rows", 13},
            {"eeg_channels", {1, 2, 3, 4}},
            {"eeg_names", "TP9,Fp1,Fp2,TP10"},
            {"accel_channels", {5, 6, 7}},
            {"gyro_channels", {8, 9, 10}}
        }},
        {"43",
            {{"name", "PiEEG"},
            {"sampling_rate", 250},
            {"timestamp_channel", 9},
            {"marker_channel", 10},
            {"package_num_channel", 0},
            {"num_rows", 11},
            {"eeg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"emg_channels", {1, 2, 3, 4, 5, 6, 7, 8}},
            {"ecg_channels", {1, 2, 3, 4, 5, 6, 7, 8}}
        }}
    }
}};
// clang-format on
