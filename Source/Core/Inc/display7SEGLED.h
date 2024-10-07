/*
 * display7SEGLED.h
 *
 *  Created on: 23 thg 9, 2024
 *      Author: ACER
 */

#ifndef INC_DISPLAY7SEGLED_H_
#define INC_DISPLAY7SEGLED_H_

#include "main.h"

#define NUM_0   (a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin)
#define NUM_1   (b_Pin | c_Pin)
#define NUM_2   (a_Pin | b_Pin | d_Pin | e_Pin | g_Pin)
#define NUM_3   (a_Pin | b_Pin | c_Pin | d_Pin | g_Pin)
#define NUM_4   (b_Pin | c_Pin | f_Pin | g_Pin)
#define NUM_5   (a_Pin | c_Pin | d_Pin | f_Pin | g_Pin)
#define NUM_6   (a_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin)
#define NUM_7   (a_Pin | b_Pin | c_Pin)
#define NUM_8   (a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin)
#define NUM_9   (a_Pin | b_Pin | c_Pin | d_Pin | f_Pin | g_Pin)
#define ALL_SEG (a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin)
#define TIMER_CYCLE 10

void display7SEG_1(int num);
void display7SEG_2(int num);

#endif /* INC_DISPLAY7SEGLED_H_ */
