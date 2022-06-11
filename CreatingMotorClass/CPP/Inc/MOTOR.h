#include "main.h"

#ifndef MOTOR_H_
#define MOTOR_H_

class MOTOR {
private:
	GPIO_TypeDef* _Port;
	uint16_t _Pin;
public:
	MOTOR(GPIO_TypeDef*, uint16_t);
	void MotorControl(int);
	virtual ~MOTOR();
};

#endif