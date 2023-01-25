#pragma once

void settings_default();
bool settings_load();
void settings_init();
void settings_save();
void settings_saveLater();
void settings_saveTask(bool force);
uint32_t fletcher32(const uint16_t *data, size_t len);
