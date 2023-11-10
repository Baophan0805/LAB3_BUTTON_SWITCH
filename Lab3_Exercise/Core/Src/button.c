/*
 * button.c
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS
 */

#include "button.h"

//
////INIT KEYREG STATE
int KeyReg0[BUTTON_COUNT] = {NORMAL_STATE};
int KeyReg1[BUTTON_COUNT] = {NORMAL_STATE};
int KeyReg2[BUTTON_COUNT] = {NORMAL_STATE};
int KeyReg3[BUTTON_COUNT] = {NORMAL_STATE};
int counter[BUTTON_COUNT] = {0};
int button[] = {IN0_Pin, IN1_Pin, IN2_Pin, IN3_Pin};
int TimeOutForKeyPress[BUTTON_COUNT] = {KEY_TIMED_OUT};
int button_flag[BUTTON_COUNT] = {0}; //Init button flag to 0
int button_long_flag[BUTTON_COUNT] = {0};

void subKeyProcess(int index) //Used to set button at index flag
{
	button_flag[index] = 1;
}

void subKeyLongProcess(int index)
{
	button_long_flag[index] = 1;
}

//Thay Nhan Version
int isButtonPressed(int index) //Check button at index is pressed or not
{
	if(button_flag[index] == 1){
		button_flag[index] = 0; //Reset flag
		return 1;
	}
	else return 0;
}

int isButtonLongPressed(int index){
	if(button_long_flag[index] == 1){
		button_long_flag[index] = 0; //Reset flag
		return 1;
	}
	else return 0;
}

void getKeyInput() //Thay Nhan version 1
{
	for (int i = 0; i < BUTTON_COUNT; i++)
	{
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		KeyReg2[i] = HAL_GPIO_ReadPin(GPIOB, button[i]);
		//Debouncing
		if((KeyReg1[i] == KeyReg0[i])
		&&(KeyReg1[i] == KeyReg2[i])) //If all 3 registers have the same values
		{
			if(KeyReg3[i] != KeyReg2[i])
			{
				KeyReg3[i] = KeyReg2[i];

				if(KeyReg2[i] == PRESSED_STATE)
				{
					subKeyProcess(i);
					TimeOutForKeyPress[i] = KEY_TIMED_OUT;
				}
			}
			else
			{
				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0){
					if(KeyReg2[i] == PRESSED_STATE)
					{
						subKeyProcess(i);
					}
					TimeOutForKeyPress[i] = KEY_TIMED_OUT;
				}
			}
		}
	}
}
