#include"main.h"
#include "MOTOR.h"

MOTOR::MOTOR(GPIO_TypeDef* Port1, uint16_t Pin1, GPIO_TypeDef* Port2, uint16_t Pin2) {
	_Port1 = Port1;
	_Pin1 = Pin1;
	_Port2 = Port2;
	_Pin2 = Pin2;
}

MOTOR::~MOTOR() {
	// TODO Auto-generated destructor stub
}

