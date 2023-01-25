#pragma once

void infoscr_setup(uint8_t mode, bool clr);
void infoscr_print();
void infoscr_printShutterSpeed();
void infoscr_printAperture();
void infoscr_printIso();
void infoscr_printExpoComp();
void infoscr_printExpoMode(uint16_t expomode);
void infoscr_printFocus();
void infoscr_blankLine(bool force_new_line);
void infoscr_nextPos(bool force_new_line);
void infoscr_clearRestOfLines();
void infoscr_changeVal(uint8_t item, int8_t tilt);
void infoscr_printEditIndicator();
void infoscr_startEdit();

extern uint8_t infoscr_mode;
