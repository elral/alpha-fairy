#pragma once

void wifi_init();
void wifi_get_unique_ssid(char* tgt);
void wifiprofile_getIdxFname(uint8_t idx, char* tgt);
bool wifiprofile_getProfileRaw(uint8_t idx, char* ssid, char* password, uint8_t* opmode, char* guid);
bool wifiprofile_writeProfileRaw(uint8_t idx, char* ssid, char* password, uint8_t opmode, char* guid);
bool wifiprofile_getProfile(uint8_t idx, wifiprofile_t* p);
bool wifiprofile_writeProfile(uint8_t idx, wifiprofile_t* p);
bool wifiprofile_connect(uint8_t idx);
void wifiprofile_deleteAll();
void wifiprofile_deleteProfile(uint8_t idx);
bool wifiprofile_isBlank(uint8_t idx);
void wifiprofile_scanFill();
int wifiprofile_autoFind(wifiprofile_t* ptgt);
void force_wifi_config(const char* fp);
void wifi_pswdPromptDrawCb();
int wifi_promptForPassword(char* ssid, char* existingPassword, char* newPassword);
bool wifi_newConnectOrPrompt(uint8_t profile_num, wifiprofile_t* profile, bool need_ask, bool can_save);


extern int wifi_err_reason;