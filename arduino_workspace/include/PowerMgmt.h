#pragma once

void gui_drawStatusBar(bool is_black);
void gui_prepStatusBarText(int16_t x, int16_t y, bool is_black);
void pwr_lcdUndim();
void pwr_sleepCheck();
void pwr_dimCheck();
void pwr_lightSleepEnter();
void pwr_lightSleepSetup();
void pwr_airplaneModeEnter();
void pwr_airplaneModeExit();
void pwr_shutdown();
void pwr_tick(bool undim);
void show_poweroff();
void pmic_startCoulombCount(void);
void pmic_log(void);

extern bool prevent_status_bar_thread;
