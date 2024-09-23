/*
 * timer.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "timer.h"

void HAL_TIM_PeriodElaspedCallback(TIM_HandleTypeDef *htim){
	if (htim->Instance == TIM2){
		button_reading();
	}
}
