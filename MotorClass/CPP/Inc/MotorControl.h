#include "main.h"
#include "MOTOR.h"

#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_

class MotorControl : public MOTOR{
public:
	MotorControl(GPIO_TypeDef* Port, uint16_t Pin) : MOTOR{Port, Pin} { }
	void frente(int);
	void parar(int);
	virtual ~MotorControl();
};

#endif /* MOTORCONTROL_H_ */