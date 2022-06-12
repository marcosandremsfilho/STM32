#include"main.h"
#include "MOTOR.h"

MOTOR::MOTOR(GPIO_TypeDef* Port1, uint16_t Pin1, GPIO_TypeDef* Port2, uint16_t Pin2, TIM_HandleTypeDef* htim) {
	_Port1 = Port1;
	_Pin1 = Pin1;
	_Port2 = Port2;
	_Pin2 = Pin2;
	_htim = htim;
}

void MOTOR :: CW(int PWM) {
	HAL_GPIO_WritePin(_Port1, _Pin1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(_Port2, _Pin2, GPIO_PIN_SET);
	_htim->Instance->CCR3 = PWM;
}

void MOTOR :: CCW(int PWM) {
	HAL_GPIO_WritePin(_Port1, _Pin1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(_Port2, _Pin2, GPIO_PIN_RESET);
	_htim->Instance->CCR3 = PWM;
}
