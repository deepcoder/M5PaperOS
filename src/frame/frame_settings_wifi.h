#ifndef _FRAME_SETTINGS_WIFI_H_
#define _FRAME_SETTINGS_WIFI_H_

#include "frame_base.h"
#include "../epdgui/epdgui.h"

class Frame_Settings_Wifi : public Frame_Base {
public:
    Frame_Settings_Wifi();
    ~Frame_Settings_Wifi();
    int init(epdgui_args_vector_t &args);
    int scan();
    int run();
    void Connect();
    void DrawItem(EPDGUI_Button *btn, String ssid, int rssi);
    void SetConnected(String ssid, int rssi);
    
private:
    EPDGUI_Button *_key_wifi[14];
    uint32_t _scan_count = 0;
    bool _connect;
    uint8_t _connected;
    String _connect_ssid;
    String _connect_password;
};

#endif //_FRAME_SETTINGS_WIFI_H_