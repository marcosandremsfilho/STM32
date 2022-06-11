#include "main.h"
#include "MotorControl.h"
#include "MOTOR.h"

void MotorControl :: frente(int time) {
	HAL_GPIO_WritePin(_Port, _Pin, GPIO_PIN_RESET);
	HAL_Delay(time);
}

void MotorControl :: parar(int time) {
	HAL_GPIO_WritePin(_Port, _Pin, GPIO_PIN_SET);
	HAL_Delay(time);
}

MotorControl::~MotorControl() {
	// TODO Auto-generated destructor stub
}
