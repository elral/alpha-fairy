#pragma once

#include "AlphaFairy.h"

void dual_shutter_shoot(bool already_focused, bool read_button, speed_t* restore_shutter, speed_t* restore_iso);
void dualshutter_drawText();
void dualshutter_logSettings();
void setup_dualshutter();
