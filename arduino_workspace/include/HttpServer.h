#pragma once

#include <Arduino.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <DNSServer.h>

void add_crossDomainHeaders(AsyncResponseStream* response);
void send_css(AsyncResponseStream* response);
bool send_wifi_settings(AsyncResponseStream* response, uint8_t idx, bool readonly);
void add_crossDomainHeaders(AsyncResponseStream* response);
void send_css(AsyncResponseStream* response);
bool send_wifi_settings(AsyncResponseStream* response, uint8_t idx, bool readonly);
void httpsrv_init();
void httpsrv_jpgStream(uint8_t* buff, uint32_t len);
void httpsrv_jpgDone(void);
void httpsrv_poll();
