#include "SensorIR.h"
#include "main.h"

SensorIR::SensorIR(GPIO_TypeDef* Port, uint16_t Pin) {
	// TODO Auto-generated constructor stub
	_Port = Port;
	_Pin = Pin;
}

int SensorIR :: leSensor() {
	int value;

	value = HAL_GPIO_ReadPin(_Port, _Pin);

	return value;
}

void SensorIR :: startFrame() {
	while (HAL_GPIO_ReadPin (_Port, _Pin));
	while (!(HAL_GPIO_ReadPin (_Port, _Pin)));
	while (HAL_GPIO_ReadPin (_Port, _Pin));
}

void SensorIR :: decodeBit() {
	for (int i=0; i<32; i++){
	  count=0;
	  while (!(HAL_GPIO_ReadPin (_Port, _Pin)));

	  while ((HAL_GPIO_ReadPin (_Port, _Pin))){
	  count++;
	  DWT_Delay_us(100);
	 }

	 if (count > 12) {
	  data |= (1UL << (31-i));
	 }

	 else data &= ~(1UL << (31-i));
	}
}

SensorIR::~SensorIR() {
	// TODO Auto-generated destructor stub
}

