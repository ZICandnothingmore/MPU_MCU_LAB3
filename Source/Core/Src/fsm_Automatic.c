/*
 * Automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "fsm_Automatic.h"
#include "fsm_Global.h"

int status = INIT;

void automatic_init(){

}

void automatic_run(){
	switch (status){
		case INIT:
			if (1){
				//set up environment for next status
				status = GREEN_RED;

			}
			break;
		case GREEN_RED:
			status = AMBER_RED;
			break;
		case AMBER_RED:
			status = RED_GREEN;
			break;
		case RED_GREEN:
			status = RED_AMBER;
			break;
		case RED_AMBER:
			status = GREEN_RED;
			break;
		default:
			break;
	}
}
