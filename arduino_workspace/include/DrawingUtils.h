#pragma one

#include <Arduino.h>

#define MICTRIG_LEVEL_BAR_HEIGHT   8
#define MICTRIG_LEVEL_TRIG_HEIGHT 12

void gui_drawVerticalDots(int x_offset, int y_margin, int y_offset, int dot_radius, int dot_cnt, int dot_idx, bool reverse, uint16_t back_color, uint16_t fore_color);
void gui_startAppPrint();
void gui_startMenuPrint();
void gui_drawConnecting(bool first);
void gui_setCursorNextLine();
void gui_blankRestOfLine();
void gui_drawTopThickLine(uint16_t thickness, uint16_t colour);
void gui_drawSpinStatus(uint16_t thickness, uint16_t bgcolour);
void gui_showVal(int32_t x, uint32_t txtfmt, Print* printer);
int8_t gui_drawFocusPullState(int y);
void gui_drawLevelBar(int32_t lvl1, int32_t lvl2, int32_t thresh1, int32_t thresh2);
void draw_borderRect(int16_t thickness, uint16_t colour);
void interval_drawTimerStart();
void interval_drawTimerLine(int16_t cx, int16_t cy, int8_t i, uint16_t colour);
void interval_drawTimerCircle(int16_t cx, int16_t cy);
void fpull_drawOneArrowLeft(int16_t x, int16_t y, uint16_t colour);
void fpull_drawOneArrowRight(int16_t x, int16_t y, uint16_t colour);
