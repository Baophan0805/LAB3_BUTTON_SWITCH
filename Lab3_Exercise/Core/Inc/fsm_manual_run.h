/*
 * fsm_manual_run.h
 *
 *
 * Created on: Oct 26, 2023
 */

#ifndef INC_FSM_MANUAL_RUN_H_
#define INC_FSM_MANUAL_RUN_H_
#include "main.h"
#include "button.h"
#include "timer.h"
#include "global.h"
#include "7seg.h"

void blink_red();
void blink_yellow();
void blink_green();
void fsm_automatic_run();
void fsm_manual_run();

extern int clock_counter;
#endif /* INC_FSM_MANUAL_RUN_H_ */
