#ifndef	_DS18B20CONFIG_H
#define	_DS18B20CONFIG_H

#include "main.h"

extern TIM_HandleTypeDef htim2;
//	Init timer on cube    1us per tick				example 72 MHz cpu >>> Prescaler=(72-1)      counter period=Max 
//###################################################################################
#define	_DS18B20_USE_FREERTOS		    				0
#define _DS18B20_MAX_SENSORS		    				1
#define	_DS18B20_GPIO												PA2_TEMP_DATA_GPIO_Port
#define	_DS18B20_PIN												PA2_TEMP_DATA_Pin

#define	_DS18B20_CONVERT_TIMEOUT_MS					5000		
#if (_DS18B20_USE_FREERTOS==1)
#define	_DS18B20_UPDATE_INTERVAL_MS					10000					//  (((	if==0  >> Ds18b20_ManualConvert()  )))    ((( if>0  >>>> Auto refresh ))) 
#endif


#define	_DS18B20_TIMER											htim2
//###################################################################################

#endif


