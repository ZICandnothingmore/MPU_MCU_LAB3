/*
 * Manual.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "fsm_Manual.h"
//void fsm_manual_init(){
//	LED_Blinking(INIT);
//}

//void LED_Blinking(int modeLED){
//	switch (modeLED){
////	case INIT:
////		HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
////		if (STATUS_MODE == MODE2) modeLED = RED;
////		if (STATUS_MODE == MODE3) modeLED = YELLOW;
////		if (STATUS_MODE == MODE4) modeLED = GREEN;
////
////		index_led = -1;
////		break;
//	case RED:
//		if (isTimerExpired(3)){
//			HAL_GPIO_TogglePin(GPIOA, RED_1_Pin|RED_2_Pin);
//			setTimer(3, 500);
//		}
//		break;
//	case GREEN:
//		if (isTimerExpired(3)){
//			HAL_GPIO_TogglePin(GPIOA, GREEN_1_Pin|GREEN_2_Pin);
//			setTimer(3, 500);
//		}
//		break;
//	case YELLOW:
//		if (isTimerExpired(3)){
//			HAL_GPIO_TogglePin(GPIOA, YELLOW_1_Pin|YELLOW_2_Pin);
//			setTimer(3, 5000);
//		}
//	default:
//		break;
//	}
//}

void fsm_manual_run(){
	switch (STATUS_MODE){
	case MODE2:
		if (isTimerExpired(3)){
			HAL_GPIO_TogglePin(GPIOA, RED_1_Pin|RED_2_Pin);
			setTimer(3, 500);
		}
		if (isButtonPressed(1)){
			value = (value < 99) ? value + 1 : 1;
		}
		break;
	case MODE3:
			if (isTimerExpired(3)){
				HAL_GPIO_TogglePin(GPIOA, GREEN_1_Pin|GREEN_2_Pin);
				setTimer(3, 500);
			}
			if (isButtonPressed(1)){
				value = (value < 99) ? value + 1 : 1;
			}
			break;
	case MODE4:
			if (isTimerExpired(3)){
				HAL_GPIO_TogglePin(GPIOA, YELLOW_1_Pin|YELLOW_2_Pin);
				setTimer(3, 500);
			}
			if (isButtonPressed(1)){
				value = (value < 99) ? value + 1 : 1;
			}
			break;
	default:
		break;
	}

	//to increase the time duration when press the 2nd button


	//7-SEG LED
	updateBuffer(STATUS_MODE);
	if (index_led > 3)
		index_led = 0;
	if (isTimerExpired(4)) {
		setTimer(4, 250);
		update7SEG(index_led++);
	}
}
