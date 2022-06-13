#include "main.h"

#ifndef SENSORIR_H_
#define SENSORIR_H_

class SensorIR {
protected:
	GPIO_TypeDef* _Port;
	uint16_t _Pin;
public:
	SensorIR(GPIO_TypeDef*, uint16_t);
	int leSensor();
	void startFrame();
	void decodeBit();
	virtual ~SensorIR();
};

#endif /* SENSORIR_H_ */