/*
 * button.h
 *
 *  Created on: Oct 5, 2023
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE 	GPIO_PIN_SET	//khong nhan
#define PRESSED_STATE 	GPIO_PIN_RESET	//nhan

extern int button1_flag;

void getInputKey();
void setButton(int index, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
uint16_t get_Button_flag(int index);
uint16_t isButtonPressed(int index);
int isButtonLongPressed(int index);
void set_pressed_flag(uint8_t index);

#endif /* INC_BUTTON_H_ */

