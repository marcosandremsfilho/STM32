/*
 * MotorDirection.cpp
 *
 *  Created on: Jun 11, 2022
 *      Author: marco
 */
#include "main.h"
#include "MOTOR.h"
#include "mainCpp.cpp"

MOTOR motor_1 (LED1_GPIO_Port, LED1_Pin);
MOTOR motor_2 (LED2_GPIO_Port, LED2_Pin);

void Frente(int time) {
	motor_1.MotorControl(1);
	motor_2.MotorControl(1);
	HAL_Delay(time);
}

void Parar(int time) {
	motor_1.MotorControl(0);
	motor_2.MotorControl(0);
	HAL_Delay(time);
}
