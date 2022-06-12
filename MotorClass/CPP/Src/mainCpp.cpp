#include "main.h"
#include "MOTOR.h"
#include "RobotDirection.h"

extern TIM_HandleTypeDef htim3;

MOTOR M1(LED_Pin1_GPIO_Port, LED_Pin1_Pin, LED_Pin2_GPIO_Port, LED_Pin2_Pin, &htim3);
MOTOR M2(LED_Pin1_GPIO_Port, LED_Pin1_Pin, LED_Pin3_GPIO_Port, LED_Pin3_Pin, &htim3);
RobotDirection robo (&M1,&M2);
int aux = 255;

void mainCpp() {
	robo.forward(100, aux);
	robo.backward(100, 255 - aux);

	aux-=50;

	HAL_Delay(500);

	if(aux < 0) {
		aux =256;
	}
}

