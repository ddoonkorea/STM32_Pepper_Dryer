#ifndef _OLED_CONTROLLER_H
#define _OLED_CONTROLLER_H
#include "ssd1306.h"
#include "controlType.h"

void opening();
void printfDefault();
void printprintTemper(int temper);
void toggleScreen();
void startToggle();
void printHeaterState(ON_OFF_t onoff);
void printfBackground();

#endif
