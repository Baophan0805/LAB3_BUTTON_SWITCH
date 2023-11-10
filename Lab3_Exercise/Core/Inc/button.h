/*
 * button.h
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#include "global.h"


#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define KEY_TIMED_OUT 100

extern int button_flag[3];

void getKeyInput();
int isButtonPressed(int);
int isButtonLongPressed(int);
#endif /* INC_BUTTON_H_ */
