#pragma once

void cam_cb_setup();
void wifi_onConnect();
void wifi_onDisconnect(uint8_t x, int reason);
void ptpcam_onConnect();
void httpcam_onConnect();
void ptpcam_onDisconnect();
void httpcam_onDisconnect();
void ptpcam_onCriticalError();
void httpcam_onCriticalError();
void httpcam_onNoServiceUrl();
void ptpcam_onReject();
void ptpcam_onConfirmedAvail();
void ptpcam_onEvent(uint16_t event_code);
void handle_user_reauth();
