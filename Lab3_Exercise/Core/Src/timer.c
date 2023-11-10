 /*
 * timer.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Bao Phan
 */

#include "timer.h"

int timer_counter[TIMER_COUNT] = {0};
int timer_flag[TIMER_COUNT] = {0};
int timer_delay[TIMER_COUNT] = {100};

void setAllTimer(int duration)
{
	for(int i = 0; i < TIMER_COUNT; i++) setTimer(duration, i);
}

void setTimer(int duration, int index)
{
	timer_flag[index] = 0;
	timer_counter[index] = duration;
}

void timerRun()
{
	for(int i = 0; i < TIMER_COUNT; i++){
		if(timer_counter[i] > 0)
		{
			timer_counter[i]--;
			if(timer_counter[i] <= 0)
			{
				timer_flag[i] = 1;
			}
		}
	}
}

void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef * htim)
{
	timerRun();
	getKeyInput();
}
