/*
 * heaterController.h
 *
 *  Created on: May 31, 2025
 *      Author: seungjunyoon
 */

#ifndef INC_HEATERCONTROLLER_H_
#define INC_HEATERCONTROLLER_H_

#include "main.h"
#include "controlType.h"
#include "defines.h"

uint8_t getHeaterState();

void heaterOnOff(uint8_t onOff);

void heaterControl(float temper);

void setDesiredtemper(void);

int getDesiredTemper(void);

void temper_up(void);

void temper_down(void);

void setFixedTemper(void);

int getFixedTemper(void);

#endif /* INC_HEATERCONTROLLER_H_ */
