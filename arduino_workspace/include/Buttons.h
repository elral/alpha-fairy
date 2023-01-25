#pragma once

#include <Arduino.h>

void btns_init();
void btns_poll();
bool btnSide_hasPressed();
void btnSide_clrPressed();
bool btnBig_hasPressed();
void btnBig_clrPressed();
bool btnPwr_hasPressed();
void btnPwr_clrPressed();
bool btnSide_isPressed();
bool btnBig_isPressed();
bool btnBoth_hasPressed();
void btnBoth_clrPressed();
bool btnAny_hasPressed();
void btnAny_clrPressed();
void btnPwr_poll();
void btnPwr_quickPoll();
void btn_installMockServer();
