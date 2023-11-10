/*
 * 7seg.c
 *
 *  Created on: Oct 26, 2023
 *      Author: ASUS
 */
#include "7seg.h"
/*
 * INSTRUCTION: NEED TO SET SEG0->SEG6 PIN
 * 				ALSO ASSUME THE LED IS ACTIVE LOW
 * */
//Display 7seg
void display7SEG(int c)
{
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 1);
	switch(c){
	case 0:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin|SEG2_Pin,0);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG1_Pin|SEG3_Pin|SEG4_Pin|SEG6_Pin,0);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin |SEG6_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin|SEG2_Pin|SEG5_Pin|SEG6_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG2_Pin|SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin, 0);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG5_Pin|SEG6_Pin, 0);
		break;
	}
}
void display7SEG_1(int c)
{
	HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG4_1_Pin|SEG5_1_Pin|SEG6_1_Pin, 1);
	switch(c){
	case 0:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG4_1_Pin|SEG5_1_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, SEG1_1_Pin|SEG2_1_Pin,0);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA,SEG0_1_Pin|SEG1_1_Pin|SEG3_1_Pin|SEG4_1_Pin|SEG6_1_Pin,0);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG6_1_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, SEG1_1_Pin|SEG2_1_Pin|SEG5_1_Pin|SEG6_1_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG5_1_Pin|SEG6_1_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG4_1_Pin|SEG5_1_Pin|SEG6_1_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin, 0);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG4_1_Pin|SEG5_1_Pin|SEG6_1_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_1_Pin|SEG5_1_Pin|SEG6_1_Pin, 0);
		break;
	}
}

