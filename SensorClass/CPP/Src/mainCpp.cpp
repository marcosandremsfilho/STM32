#include "main.h"
#include "SENSOR.h"

SENSOR sensor_Direita(Sensor_Dir_GPIO_Port, Sensor_Dir_Pin);
SENSOR sensor_Centro(Sensor_Cen_GPIO_Port, Sensor_Cen_Pin);
SENSOR sensor_Esquerda(Sensor_Esq_GPIO_Port, Sensor_Esq_Pin);

void mainCpp() {
	sensor_Direita.SensorRead();
	sensor_Centro.SensorRead();
	sensor_Esquerda.SensorRead();
}

