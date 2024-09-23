/*
 * input_processing.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "input_processing.h"

enum ButtonState{BUTTON_RELEASED, BUTTON_PRESSED,
	BUTTON_PRESSED_MORE_THAN_1_SECOND} ;
enum ButtonState buttonState = BUTTON_RELEASED;



void fsm_for_input_processing(void){
	switch(buttonState){
		case BUTTON_RELEASED:{
			if (isPressed(0)){
				buttonState = BUTTON_PRESSED;
				//TODO
				//increase value of port a by one unit
			}
			break;
		}
		case BUTTON_PRESSED:{
			if (!isPressed(0)){
				buttonState = BUTTON_RELEASED;
			}
			else{
				if (isPressed1s(0)){
					buttonState = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				}
			}
			break;
		}
		case BUTTON_PRESSED_MORE_THAN_1_SECOND:{
			if (!isPressed(0)){
				buttonState = BUTTON_RELEASED;
			}
			//TODO
			break;
		}
	}
}

