#include "sensorUltrasónico.h"

sensor_ultrasonico::sensor_ultrasonico(int triggerPin, int echoPin) : _triggerPin(triggerPin), _echoPin(echoPin) {}

void sensor_ultrasonico::iniciar()
{
    pinMode(_triggerPin, OUTPUT);
    pinMode(_echoPin, INPUT);
}

float sensor_ultrasonico::medir_distancia()
{
    digitalWrite(_triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_triggerPin, LOW);
    long t = pulseIn(_echoPin, HIGH);
    return t / 58.0; // Calculating distance in centimeters
}