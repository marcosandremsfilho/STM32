/*
 * mainCpp.cpp
 *
 *  Created on: Jun 9, 2022
 *      Author: marco
 */
#include "main.h"
#include "LED.h"

void mainCpp() {

	LED Led_1(GPIO_Led1_GPIO_Port, GPIO_Led1_Pin);
	Led_1.led_control(1);
	LED Led_2(GPIO_Led2_GPIO_Port, GPIO_Led2_Pin);
	Led_2.led_control(1);
	LED Led_3(GPIO_Led3_GPIO_Port, GPIO_Led3_Pin);
	Led_3.led_control(1);
	LED Led_4(GPIO_Led4_GPIO_Port, GPIO_Led4_Pin);
	Led_4.led_control(1);
	HAL_Delay(500);
	Led_1.led_control(0);
	Led_2.led_control(0);
	Led_3.led_control(0);
	Led_4.led_control(0);
	HAL_Delay(500);
}



