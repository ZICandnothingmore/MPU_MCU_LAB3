/*
 * Automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include <Global.h>
#include "fsm_Automatic.h"
#include "software_timer.h"

//int counter = 0;
//int LED_1 = 5;
//int LED_2 = 3;

void automatic_init() {

}

void automatic_run() {
//	HAL_GPIO_WritePin(GPIOA,
//			RED_LED_Init_Pin | RED_1_Pin | YELLOW_1_Pin | GREEN_1_Pin
//					| RED_2_Pin | YELLOW_2_Pin | GREEN_2_Pin, GPIO_PIN_RESET);
//	switch (status) {
//	case INIT:
//		//set up environment for next status
//		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 1);
//		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
//		status = GREEN_RED;
//		break;
//	case GREEN_RED:
//		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 1);
//		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
//		if (counter <= 0) {
//			counter = 2;
//			LED_1 = 2;
//			status = YELLOW_RED;
//		}
//		break;
//	case YELLOW_RED:
//		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 1);
//		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
//		if (counter <= 0) {
//			counter = 3;
//			LED_1 = 5;
//			LED_2 = 3;
//			status = RED_GREEN;
//		}
//		break;
//	case RED_GREEN:
//		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
//		HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 1);
//		if (counter <= 0) {
//			counter = 2;
//			LED_2 = 2;
//			status = RED_YELLOW;
//		}
//		break;
//	case RED_YELLOW:
//		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
//		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 1);
//		if (counter <= 0) {
//			counter = 3;
//			LED_1 = 3;
//			LED_2 = 5;
//			status = GREEN_RED;
//			//}
//		}
//		break;
//	default:
//		break;
//	}
//	counter--;
//	LED_1--;
//	LED_2--;
	 display_LED();
}
