#pragma once

bool extinput_poll();
bool imutrig_poll();
void extinput_drawLevel();
void imutrig_drawLevel();
#ifdef ENABLE_BUILD_LEPTON
void lepton_drawLevel();
#endif
void trigger_drawLevel();
bool trigger_all_poll();
void trigger_drawActionIcon(int16_t y);
bool trigger_nullfunc(void* ptr);
void setup_shuttertrigger();
