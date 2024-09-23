/*
 * input_reading.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "input_reading.h"

#define NBS_OF_BUTTONS					1
#define DURATION_FOR_AUTO_INCREASING	100
#define BUTTON_IS_PRESSED				0
#define BUTTON_IS_RELEASED				1

//the buffer that the final result is stored after debouncing
static GPIO_PinState buttonBuffer[NBS_OF_BUTTONS];
//two buffers for debouncing
static GPIO_PinState debounceButtonBuffer1[NBS_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[NBS_OF_BUTTONS];
//to define a flag for a button pressed more than 1 sec
static uint8_t flagForButtonPressed1s[NBS_OF_BUTTONS];
//to define counter for automatically increasing the value after the button is pressed more than 1 sec
static uint16_t counterForButtonPress1s[NBS_OF_BUTTONS];

void button_reading(void){
	for (char i = 0; i < NBS_OF_BUTTONS; i++){
		debounceButtonBuffer2[i] = debounceButtonBuffer2[i];
		debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		if (buttonBuffer[i] == BUTTON_IS_PRESSED){
			//if a button is pressed, we start counting
			if (counterForButtonPress1s[i] < DURATION_FOR_AUTO_INCREASING){
				counterForButtonPress1s[i]++;
			}
			else{
				flagForButtonPressed1s[i] = 1;
				//TODO
			}
		}
		else{
			counterForButtonPress1s[i] = 0;
			flagForButtonPressed1s[i] = 0;
		}
	}
}

//Checking a button is pressed or not
unsigned char isPressed(uint8_t index){
	if (index >= NBS_OF_BUTTONS)	return 0;
	return (buttonBuffer[index] == BUTTON_IS_PRESSED);
}

//Checking a button is pressed more than a second or not
unsigned char isPressed1s(unsigned char index){
	if (index >= NBS_OF_BUTTONS)	return 0xff;
	return (flagForButtonPressed1s[index] == 1);
}
