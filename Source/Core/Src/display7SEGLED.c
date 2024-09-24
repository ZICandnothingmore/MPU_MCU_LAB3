/*
 * display7SEGLED.c
 *
 *  Created on: 23 thg 9, 2024
 *      Author: ACER
 */

#include "display7SEGLED.h"

void display7SEG_1(int num){
	if (num == 0){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if (num == 1){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if (num == 2){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 1);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 3){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 4){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 5){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 6){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 7){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if (num == 8){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 9){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
}

void display7SEG_2(int num){
	if (num == 0){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 0);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 0);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 1);
	}
	if (num == 1){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 1);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 1);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 1);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 1);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 1);
	}
	if (num == 2){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 1);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 0);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 1);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
	if (num == 3){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 1);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 1);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
	if (num == 4){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 1);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 1);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 1);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 0);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
	if (num == 5){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 1);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 1);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 0);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
	if (num == 6){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 1);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 0);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 0);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
	if (num == 7){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 1);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 1);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 1);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 1);
	}
	if (num == 8){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 0);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 0);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
	if (num == 9){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, 0);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, 0);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, 0);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, 0);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, 1);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, 0);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, 0);
	}
}


