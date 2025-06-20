#include "heaterController.h"
#include "oledController.h"
#include "ledController.h"

static uint8_t m_state = 0;


//static int m_before_temper = 0;

static int m_desired_temper = DEFAULT_TEMPER;		// 현재 값 25도
static int m_fixed_temper = DEFAULT_TEMPER;			// 현재 값 25도

void initHeater(){
	m_state=0;
	heaterOnOff(OFF_t);
}

void heaterControl(float temper){

	if(m_state){

		if((int)temper >= (m_fixed_temper - GOING_UP_GAP)){
				heaterOnOff(OFF_t);
		}
	}else{
		if((int)temper <  m_fixed_temper - GOING_DOWN_GAP){
			heaterOnOff(ON_t);
		}
	}
}

void temper_up(){

	m_desired_temper++;		// 버튼을 눌렀을 때 설정 온도를 올림
	if(m_desired_temper > 99){	// 설정 온도값이 99도를 넘을 시
		m_desired_temper = 0;		// 0으로 변경
	}
	printTemper(m_desired_temper);		// 설정 온도 출력
}

void temper_down(){

	m_desired_temper--;		// 버튼을 눌렀을 때 온도를 내림
	if(m_desired_temper < 0){		// 설정 온도값이 0도를 이하라면
		m_desired_temper = 99;		// 99로 변경
	}
	printTemper(m_desired_temper);		// 설정 온도 출력
}

void setFixedTemper(){
	m_fixed_temper = m_desired_temper;
}

int getFixedTemper(void){
	return m_desired_temper;
}


void heaterOnOff(uint8_t onOff){

	HAL_GPIO_WritePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin,onOff);
	m_state = onOff;

	if(onOff == ON_t){
		led2OnOff(ON_t);
		printHeaterState(ON_t);
	}else{
		led2OnOff(OFF_t);
		printHeaterState(OFF_t);
	}

}


uint8_t getHeaterState(){
	return m_state;
}
