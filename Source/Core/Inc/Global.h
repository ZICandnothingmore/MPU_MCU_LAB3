/*
 * Global.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "fsm_Automatic.h"
#include "fsm_Manual.h"
#include "software_timer.h"

#define INIT 		1
#define GREEN_RED	2
#define YELLOW_RED	3
#define RED_GREEN	4
#define RED_YELLOW	5

#define MAN_GREEN_RED	12
#define MAN_YELLOW_RED	13
#define MAN_RED_GREEN	14
#define MAN_RED_YELLOW	15

extern int status;

#endif /* INC_GLOBAL_H_ */
