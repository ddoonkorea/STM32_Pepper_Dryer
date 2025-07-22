#include "buttonController.h"
#include "oledController.h"
#include "heaterController.h"

int count = 0;

void checkButton() {
	if (g_f_sw_up) {
		g_f_sw_up = 0;
		count++;
		temper_up();
	}

	if (g_f_sw_down) {
		g_f_sw_down = 0;
		temper_down();
	}

	if (g_f_sw_fix) {
		g_f_sw_fix = 0;
		startToggle();
		setFixedTemper();
	}

	if (g_f_sw_on) {
		g_f_sw_on = 0;
	}
}


ON_OFF_t getSwState(){		// 전원 스위치
	if(HAL_GPIO_ReadPin(PB12_START_SW_PIN_GPIO_Port_GPIO_Port, PB12_START_SW_PIN_GPIO_Port_Pin)) {
		return OFF_t;	// High일 경우 전원 OFF
	} else {
		return ON_t;	// Low일 경우 전원 ON
	}
}
