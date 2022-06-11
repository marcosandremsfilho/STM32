#include "main.h"
#include "MotorControl.h"
#include "MOTOR.h"

extern TIM_HandleTypeDef htim3;

void MotorControl :: frente(int time, int PWM) {
	HAL_GPIO_WritePin(_Port1, _Pin1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(_Port2, _Pin2, GPIO_PIN_SET);
	htim3.Instance->CCR3 = PWM;
	HAL_Delay(time);
}

void MotorControl :: tras(int time, int PWM) {
	HAL_GPIO_WritePin(_Port1, _Pin1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_Port2, _Pin2, GPIO_PIN_RESET);
	htim3.Instance->CCR3 = PWM;
	HAL_Delay(time);
}

MotorControl::~MotorControl() {
	// TODO Auto-generated destructor stub
}

