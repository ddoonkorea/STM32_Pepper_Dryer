/*
 * defines.h
 *
 *  Created on: Jun 5, 2025
 *      Author: seungjunyoon
 */

#ifndef INC_DEFINES_H_
#define INC_DEFINES_H_

#define DEFAULT_TEMPER 25		// OLED 출력 기본값 25.0
#define BUTTON_GAP 200	// 0.2
#define POWER_SW_CHECK_TIME 100
#define TOGGLE_TIME 10000

#define GOING_UP_GAP 3		// 상한 여유 범위 (ex. Setting 값을 40으로 했을경우 온도가 35도일때 멈추란말)
#define GOING_DOWN_GAP 3	// 하한 여유 범위

#endif /* INC_DEFINES_H_ */
