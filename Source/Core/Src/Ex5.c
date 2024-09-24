/*
 * Ex5.c
 *
 *  Created on: 24 thg 9, 2024
 *      Author: ACER
 */

#include "Ex5.h"

int traffic_light_signal_1 = 0;
int traffic_light_signal_2 = 0;
int traffic_light_time_group1 = 5;
int traffic_light_time_group2 = 3;
int led_buffer[2];
int index_trafficlight;
int index_mode = 0;

void update7SEG_1(int index){
	switch(index){
		case 0:
			//TODO
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			display7SEG_1(led_buffer[0]);
			break;
		case 1:
			//TODO
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
			display7SEG_1(led_buffer[1]);
			break;
		default:
			break;
	}
}

void update7SEG_2(int index){
	switch(index){
		case 0:
			//TODO
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN0_Pin, 0);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN1_Pin, 1);
			display7SEG_1(0);
			break;
		case 1:
			//TODO
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN0_Pin, 1);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN1_Pin, 0);
			display7SEG_1(1);
			break;
		default:
			break;
	}
}


void update7SEGTrafficBuffer(){
	led_buffer[0] = traffic_light_time_group1--;
	led_buffer[1] = traffic_light_time_group2--;
}

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
	update7SEGTrafficBuffer();
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
		update7SEGTrafficBuffer();
}


void ex5_init(){
	display7SEG_1(index_trafficlight);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
	display7SEG_2(index_mode);
}

void ex5_run(){
	display7SEG_1(index_trafficlight);
	index_trafficlight++;
	display7SEG_2(index_mode++);
	if (index_mode > 1) index_mode = 0;
}
