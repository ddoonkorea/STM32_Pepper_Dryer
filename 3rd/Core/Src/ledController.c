#include "ledController.h"


void led1OnOff(ON_OFF_t on_off) {		// 스위치가 켜져있는지

	if (on_off == ON_t) {	// LED를 키라는 명령이 있었으면, 실질적으로 WritePin을 통해 High상태를 만들며 불이 켜진다.
		HAL_GPIO_WritePin(PB6_LED1_GPIO_Port, PB6_LED1_Pin, 1);
	} else if (on_off == OFF_t) {	// LED를 끄라는 명령이 있었으면, 실직적으로 WritePin을 통해 Low상태를 만들며 불이 꺼진다.
		HAL_GPIO_WritePin(PB6_LED1_GPIO_Port, PB6_LED1_Pin, 0);
	}
}


void led2OnOff(ON_OFF_t on_off) {		// 드라이기가 작동하는지

	if (on_off == ON_t) {
		HAL_GPIO_WritePin(PB7_LED1_GPIO_Port, PB7_LED1_Pin, 1);
	} else if (on_off == OFF_t) {
		HAL_GPIO_WritePin(PB7_LED1_GPIO_Port, PB7_LED1_Pin, 0);
	}
}
