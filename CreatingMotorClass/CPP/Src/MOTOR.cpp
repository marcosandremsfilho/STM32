#include "MOTOR.h"

MOTOR::MOTOR(GPIO_TypeDef* Port, uint16_t Pin) {
	_Port = Port;
	_Pin = Pin;
}

void MOTOR :: MotorControl(int control) {
	HAL_GPIO_WritePin(_Port, _Pin, (GPIO_PinState) control);
}

MOTOR::~MOTOR() {
	// TODO Auto-generated destructor stub
}

