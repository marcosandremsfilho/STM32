#include "main.h"
#include "MOTOR.h"

#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_

class MotorControl : public MOTOR{
public:
	MotorControl(GPIO_TypeDef* Port1, uint16_t Pin1, GPIO_TypeDef* Port2, uint16_t Pin2) : MOTOR{Port1, Pin1, Port2, Pin2} { }
	void frente(int);
	void tras(int);
	virtual ~MotorControl();
};

#endif /* MOTORCONTROL_H_ */
