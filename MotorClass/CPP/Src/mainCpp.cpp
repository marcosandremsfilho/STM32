/*
 * mainCpp.cpp
 *
 *  Created on: Jun 11, 2022
 *      Author: marco
 */
#include "main.h"
#include "MOTOR.h"
#include "MotorControl.h"

MotorControl M1(LED_Pin1_GPIO_Port, LED_Pin1_Pin, LED_Pin2_GPIO_Port, LED_Pin2_Pin);

void mainCpp() {
	M1.frente(1000);
	M1.tras(1000);
}

