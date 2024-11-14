/////*
//// * displayTrafficlight.c
//// *
//// *  Created on: 23 thg 9, 2024
//// *      Author: ACER
//// */
////
//#include "displayTrafficLight.h"
//
////void button_mode() {
////	switch (index) {
////	case 0:
////		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
////		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
////		display7SEG_2(0);
////		index = 1;
////		break;
////	case 1:
////		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
////		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
////		display7SEG_2(1);
////		index = 0;
////		break;
////	}
////}
//
//void display_LED() {
//	HAL_GPIO_WritePin(GPIOA,	RED_LED_Init_Pin | RED_1_Pin | YELLOW_1_Pin | GREEN_1_Pin
//								| RED_2_Pin | YELLOW_2_Pin | GREEN_2_Pin, GPIO_PIN_RESET);
//	switch (status) {
//		case RED_GREEN:
//			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
//			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 1);
//			if (counter <= 0) {
//				counter = 2;
//				TimeForLed2 = 2;
//				status = RED_YELLOW;
//			}
//			break;
//		case RED_YELLOW:
//			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
//			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 1);
//			if (counter <= 0) {
//				counter = 3;
//				TimeForLed1 = 3;
//				TimeForLed2 = 5;
//				status = GREEN_RED;
//			}
//			break;
//		case GREEN_RED:
//			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 1);
//			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
//			if (counter <= 0) {
//				counter = 2;
//				TimeForLed1 = 2;
//				status = YELLOW_RED;
//			}
//			break;
//		case YELLOW_RED:
//			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 1);
//			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
//			if (counter <= 0) {
//				counter = 3;
//				TimeForLed1 = 5;
//				TimeForLed2 = 3;
//				status = RED_GREEN;
//			}
//			break;
//		default: break;
//	}
//	counter--;
//	TimeForLed1--;
//	TimeForLed2--;
//}
