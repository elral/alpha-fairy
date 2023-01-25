#pragma once

void app_waitAllReleaseGfx(uint8_t waitgfx);
void app_waitAllRelease();
void app_waitAnyPress(bool can_sleep);
void app_waitAllReleaseConnecting();
void app_waitAllReleaseUnsupported();
void app_sleep(uint32_t x, bool forget_btns);
int8_t imu_getFocusPull();
int focus_tiltToStepSize(int8_t tilt);
uint32_t shutter_to_millis(uint32_t x);
void gui_formatSecondsTime(int32_t x, char* str, bool shorten);
void gui_formatShutterSpeed(uint32_t x, char* str);
void gui_formatISO(uint32_t x, char* str);
int file_readLine(File* f, char* tgt, int charlimit);
void dissolve_restart(uint16_t colour);
int32_t get_pinCfgGpio(int32_t x);
void safe_all_pins();
