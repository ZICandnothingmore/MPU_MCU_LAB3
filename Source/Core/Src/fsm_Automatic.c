/*
 * Automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "fsm_Automatic.h"
#include "fsm_Global.h"
#include "software_timer.h"


void display_SEG(){
	setTimer(2, 1000);
}

void traffic_green_red(){

}

void automatic_init(){

}

void automatic_run(){
	switch (status){
		case INIT:
			if (1){
				//set up environment for next status
				status = GREEN_RED;
				setTimer(0, 5000);
			}
			break;
		case GREEN_RED:
			traffic_green_red();
			if (isTimerExpired(2) == 1){
				//update display
				setTimer(2, 1000);
			}
			if (isTimerExpired(0) == 1){
				status = AMBER_RED;
				setTimer(0, 2000);
			}
//			if (button1_flag == 1){
//				status = MAN_GREEN_RED;
//				button1_flag = 0;
//				setTimer(1, 10000);
//			}
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
