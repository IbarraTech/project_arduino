#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

class sensor_ultrasonico
{
public:
    sensor_ultrasonico(int triggerPin, int echoPin);
    void iniciar();
    float medir_distancia();

private:
    int _triggerPin;
    int _echoPin;
};

#endif