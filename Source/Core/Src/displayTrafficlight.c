/*
 * displayTrafficlight.c
 *
 *  Created on: 23 thg 9, 2024
 *      Author: ACER
 */

#include "displayTrafficLight.h"
#include "display7SEGLED.h"

int traffic_light_signal_1 = 0;
int traffic_light_signal_2 = 0;
int traffic_light_time_group1 = 5;
int traffic_light_time_group2 = 3;

void traffic_light_1_run(){
	switch (traffic_light_signal_1){
	  case 0:{ //RED
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
		display7SEG_1(traffic_light_time_group1);
		traffic_light_time_group1--;
		if (traffic_light_time_group1 <= 0){
			traffic_light_signal_1 = 1;
			traffic_light_time_group1 = 3;
		}
		break;
	  }
	  case 1:{
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);
		display7SEG_1(traffic_light_time_group1);
		traffic_light_time_group1--;
		if (traffic_light_time_group1 <= 0){
			traffic_light_signal_1 = 2;
			traffic_light_time_group1 = 2;
		}
		break;
	  }
	  case 2:{
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
		display7SEG_1(traffic_light_time_group1);
		traffic_light_time_group1--;
		if (traffic_light_time_group1 <= 0){
			traffic_light_signal_1 = 0;
			traffic_light_time_group1 = 5;
		}
		break;
	  }
	  default:;
	}
}

void traffic_light_2_run(){
	switch (traffic_light_signal_2){
		  case 0:{ //GREEN
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
			display7SEG_2(traffic_light_time_group2);
			traffic_light_time_group2--;
			if (traffic_light_time_group2 <= 0){
				traffic_light_signal_2 = 1;
				traffic_light_time_group2 = 2;
			}
			break;
		  }
		  case 1:{
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
			display7SEG_2(traffic_light_time_group2);
			traffic_light_time_group2--;
			if (traffic_light_time_group2 <= 0){
				traffic_light_signal_2 = 2;
				traffic_light_time_group2 = 5;
			}
			break;
		  }
		  case 2:{
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
			display7SEG_2(traffic_light_time_group2);
			traffic_light_time_group2--;
			if (traffic_light_time_group2 <= 0){
				traffic_light_signal_2 = 0;
				traffic_light_time_group2 = 3;
			}
			break;
		  }
		  default:;
		}
}
