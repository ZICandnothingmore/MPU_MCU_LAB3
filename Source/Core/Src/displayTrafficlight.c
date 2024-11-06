///*
// * displayTrafficlight.c
// *
// *  Created on: 23 thg 9, 2024
// *      Author: ACER
// */
//
#include "displayTrafficLight.h"

int counter = 3;
int LED_1 = 5;
int LED_2 = 3;
uint8_t hour = 0, minute = 0, second = 0;

typedef enum {
	RED_GREEN, RED_YELLOW, GREEN_RED, YELLOW_RED
} STATE;
STATE state;

//void button_mode() {
//	switch (index) {
//	case 0:
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
//		display7SEG_2(0);
//		index = 1;
//		break;
//	case 1:
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
//		display7SEG_2(1);
//		index = 0;
//		break;
//	}
//}

void display_LED() {
	HAL_GPIO_WritePin(GPIOA,	RED_LED_Init_Pin | RED_1_Pin | YELLOW_1_Pin | GREEN_1_Pin
								| RED_2_Pin | YELLOW_2_Pin | GREEN_2_Pin, GPIO_PIN_RESET);
	switch (state) {
		case RED_GREEN:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 1);
			if (counter <= 0) {
				counter = 2;
				LED_2 = 2;
				state = RED_YELLOW;
			}
			break;
		case RED_YELLOW:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 1);
			if (counter <= 0) {
				counter = 3;
				LED_1 = 3;
				LED_2 = 5;
				state = GREEN_RED;
			}
			break;
		case GREEN_RED:
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 1);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
			if (counter <= 0) {
				counter = 2;
				LED_1 = 2;
				state = YELLOW_RED;
			}
			break;
		case YELLOW_RED:
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 1);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
			if (counter <= 0) {
				counter = 3;
				LED_1 = 5;
				LED_2 = 3;
				state = RED_GREEN;
			}
			break;
		default: break;
	}
	counter--;
	LED_1--;
	LED_2--;
}
