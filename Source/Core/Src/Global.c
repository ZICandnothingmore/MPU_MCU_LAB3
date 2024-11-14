/*
 * Global.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#include "Global.h"

int STATUS_7SEG = LED7SEG1;

int STATUS_MODE = INIT;
int STATUS_BLINKY = INIT;

int buffer_7seg[4] = {0};
int led_index = 0;

int TimeRed = 5;
int TimeGreen = 3;
int TimeYellow = 2;

int TimeForLed1 = 5;
int TimeForLed2 = 3;
int counter = 0;
int status = 0;

int value = 0;
