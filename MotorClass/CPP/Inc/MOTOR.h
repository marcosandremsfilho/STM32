#include "main.h"

#ifndef MOTOR_H_
#define MOTOR_H_

class MOTOR {
protected:
	GPIO_TypeDef* _Port;
	uint16_t _Pin;

public:
	MOTOR(GPIO_TypeDef*, uint16_t);
	virtual ~MOTOR();
};

#endif
