#include "button.h"

#define NBS_OF_BUTTONS 3

int KeyReg0[NBS_OF_BUTTONS] = { NORMAL_STATE };
int KeyReg1[NBS_OF_BUTTONS] = { NORMAL_STATE };
int KeyReg2[NBS_OF_BUTTONS] = { NORMAL_STATE };
int KeyReg3[NBS_OF_BUTTONS] = { NORMAL_STATE }; // Trạng thái ổn định
int TimeOutForKeyPress[NBS_OF_BUTTONS] = {200}; // Mỗi nút có thời gian chờ riêng

int button_pressed[NBS_OF_BUTTONS];
int button_long_pressed[NBS_OF_BUTTONS];
int button_flag[NBS_OF_BUTTONS];

void setButton(int index, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	KeyReg0[index] = KeyReg1[index];
	KeyReg1[index] = KeyReg2[index];
	KeyReg2[index] = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
	//button_flag[index] = 0;
}

//void set_pressed_flag(uint8_t index){
//	button_flag[index] = 0;
//}
//
//uint16_t get_Button_flag(int index) {
//	return button_flag[index];
//}

uint16_t isButtonPressed(int index) {
	if (button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int index) {
	if (button_long_pressed[index] == 1) {
		button_long_pressed[index] = 0;
		return 1;
	}
	return 0;
}

//void subKeyProcess() {
//	//TODO
//	//HAL_GPIO_TogglePin(RED_LED_Init_GPIO_Port, RED_LED_Init_Pin);
//	//isButtonPressed(0);
//}

void getInputKey() {
	setButton(0, BUTTON_1_GPIO_Port, BUTTON_1_Pin);

	for (int index = 0; index < NBS_OF_BUTTONS; index++) {
		if ((KeyReg1[index] == KeyReg0[index])
				&& (KeyReg1[index] == KeyReg2[index])) {
			// Nút đã ổn định
			if (KeyReg3[index] != KeyReg2[index]) {
				// update for keyreg3
				KeyReg3[index] = KeyReg2[index];
				if (KeyReg2[index] == PRESSED_STATE) {
					TimeOutForKeyPress[index] = 200; // Đặt thời gian chờ cho nhấn lâu
					button_flag[index] = 1; // Đánh dấu nhấn ngắn
					//subKeyProcess();
				}
			} else {
				// Chỉ giảm `TimeOutForKeyPress` khi nút đang nhấn
				if (TimeOutForKeyPress[index] > 0) {
					TimeOutForKeyPress[index]--;
				}
				if (TimeOutForKeyPress[index] <= 0) {
					// Nếu đã hết thời gian chờ thì xác định nhấn lâu
					button_long_pressed[index] = 1;
//					subKeyProcess(); // Chỉ gọi khi nút đã nhấn lâu
//					TimeOutForKeyPress[index] = 50; // Đặt lại thời gian chờ cho lần nhấn tiếp theo
					KeyReg3[index] = NORMAL_STATE;
				}
			}
		}
	}
}
