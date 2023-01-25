#pragma once

void mictrig_init();
void mictrig_unpause();
void mictrig_pause();
void mictrig_poll();
#ifdef MICTRIG_STATS
void mictrig_stats_task(uint32_t add_bytes, uint32_t now_time);
#endif
void mictrig_decayTask();
bool mictrig_shoot();
void mictrig_drawLevel();
