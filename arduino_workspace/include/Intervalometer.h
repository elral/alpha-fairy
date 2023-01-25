#pragma once

void interval_drawTimer(int8_t x);
int32_t interval_calcTotal(uint8_t menu_id);
bool intervalometer_func(void* ptr);
bool intervalometer_wait(
        int32_t     twait         // number of seconds to wait
      , uint32_t    tstart        // start time, in milliseconds, of the wait
      , int32_t     cnt           // number of photos remaining
      , const char* msg           // message to show in the first line of text
      , bool        pausable      // if true, then a side button press will cause the pause to happen at the end of bulb
      , int32_t     total_period  // total time period for each interval, in seconds, for display purposes
      );
void setup_intervalometer();

