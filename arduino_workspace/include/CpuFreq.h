#pragma once

#include <Arduino.h>

void cpufreq_init(void);
void cpufreq_setTarget(uint32_t mhz);
void cpufreq_change(uint32_t mhz);
void cpufreq_boost(void);
void cpufreq_task(void);
