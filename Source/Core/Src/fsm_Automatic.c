/*
 * Automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "fsm_Automatic.h"

void fsm_automatic_run() {
	if (STATUS_MODE != MODE1)
		return;

	//default
	if (TimeRed != TimeYellow + TimeGreen) {
		TimeRed = 5;
		TimeYellow = 2;
		TimeGreen = 3;
		return;
	}

	switch (STATUS_LED_1) {
	//RED LED FIRST
	case INIT:
		//initial
		STATUS_LED_1 = AUTO_RED_1;
		TimeForLed1 = TimeRed;
//		setTimer(0, 1010); 	//for LED_1
//		setTimer(1, 239);	//for 4_7SEG
//		setTimer(2, 1010);	//for LED_2
		break;
	case AUTO_RED_1:
		//TODO
		HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin | GREEN_1_Pin, LED_OFF);
		HAL_GPIO_WritePin(GPIOA, RED_1_Pin, LED_ON);
		//LED
		if (isTimerExpired(0)) {
			setTimer(0, 1000);
			TimeForLed1--;
			if (TimeForLed1 <= 0) {
				STATUS_LED_1 = AUTO_GREEN_1;
				TimeForLed1 = TimeGreen;
			}
		}
		break;
	case AUTO_GREEN_1:
		//TODO
		HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin | RED_1_Pin, LED_OFF);
		HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin, LED_ON);
		//LED
		if (isTimerExpired(0)) {
			setTimer(0, 1000);
			TimeForLed1--;
		}
		if (TimeForLed1 <= 0) {
			STATUS_LED_1 = AUTO_YELLOW_1;
			TimeForLed1 = TimeYellow;
		}

		break;
	case AUTO_YELLOW_1:
		//TODO
		HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin | RED_1_Pin, LED_OFF);
		HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin, LED_ON);
		//LED
		if (isTimerExpired(0)) {
			setTimer(0, 1000);
			TimeForLed1--;
		}
		if (TimeForLed1 <= 0) {
			STATUS_LED_1 = AUTO_RED_1;
			TimeForLed1 = TimeRed;
		}
		break;
	default:
		break;
	}

	switch (STATUS_LED_2) {
	//GREEN LED FIRST
	case INIT:
		//initial
		STATUS_LED_2 = AUTO_GREEN_2;
		TimeForLed2 = TimeGreen;
		break;
	case AUTO_RED_2:
		//TODO
		HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin | GREEN_2_Pin, LED_OFF);
		HAL_GPIO_WritePin(GPIOA, RED_2_Pin, LED_ON);
		//LED
		if (isTimerExpired(2)) {
			setTimer(2, 1000);
			TimeForLed2--;
		}
		if (TimeForLed2 <= 0) {
			STATUS_LED_2 = AUTO_GREEN_2;
			TimeForLed2 = TimeGreen;
		}
		break;
	case AUTO_GREEN_2:
		//TODO
		HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin | RED_2_Pin, LED_OFF);
		HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin, LED_ON);
		//LED
		if (isTimerExpired(2)) {
			setTimer(2, 1000);
			TimeForLed2--;
		}
		if (TimeForLed2 <= 0) {
			STATUS_LED_2 = AUTO_YELLOW_2;
			TimeForLed2 = TimeYellow;
		}
		break;
	case AUTO_YELLOW_2:
		//TODO
		HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin | RED_2_Pin, LED_OFF);
		HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin, LED_ON);
		//LED
		if (isTimerExpired(2)) {
			setTimer(2, 1000);
			TimeForLed2--;
		}
		if (TimeForLed2 <= 0) {
			STATUS_LED_2 = AUTO_RED_2;
			TimeForLed2 = TimeRed;
		}
		break;
	default:
		break;
	}

	//7-SEG LED
	updateBuffer(MODE1);
	if (index_led > 3)
		index_led = 0;
	if (isTimerExpired(1)) {
		setTimer(1, 250);
		update7SEG(index_led++);
	}
}
