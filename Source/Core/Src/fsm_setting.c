/*
 * fsm_setting.c
 *
 *  Created on: 6 thg 11, 2024
 *      Author: ACER
 */

#include "fsm_setting.h"

void fsm_setting_run() {
	switch (STATUS_MODE) {
	case INIT:
		STATUS_MODE = MODE1;
		break;
	case MODE1:
		if (isButtonPressed(0)) {
			STATUS_MODE = MODE2;
			value = TimeRed;
			STATUS_BLINKY = INIT;
			//index_led = -1;
			counter = 1;
		}
		break;
	case MODE2:
		if (counter == 1) {
			HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
			setTimer(3, 523); 			//blinking led
			setTimer(4, 237);			//modified time
			counter = 0;
		}
		if (isButtonPressed(0)) {
			STATUS_MODE = MODE3;
			value = TimeYellow;
			counter = 1;
			STATUS_BLINKY = INIT;
		}
		else if (isButtonPressed(2)) {
			TimeRed = value;
		}
		break;
	case MODE3:
		if (counter == 1) {
			HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
			counter = 0;
		}
		if (isButtonPressed(0)) {
			STATUS_MODE = MODE4;
			value = TimeGreen;
			STATUS_BLINKY = INIT;
			counter = 1;
		} else if (isButtonPressed(2)) {
			TimeYellow = value;
		}
		break;
	case MODE4:
		if (counter == 1) {
			HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
			counter = 0;
		}
		if (isButtonPressed(0)) {
			HAL_GPIO_WritePin(GPIOA,
						ALL_LED, LED_OFF);
			STATUS_MODE = MODE1;
			index_led = -1;
			STATUS_LED_1 = INIT;
			STATUS_LED_2 = INIT;
		} else if (isButtonPressed(2)) {
			TimeGreen = value;
		}
		break;
	default:
//		STATUS_MODE = INIT;
		break;
	}
}
