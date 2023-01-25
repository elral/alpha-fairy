#pragma once

void fenc_task();
bool fenc_canOperate();
void fenc_calib_sleep(uint32_t x);
bool fenc_calibrate();
void focus_calib_write(uint16_t colour);
void setup_focuscalib();
