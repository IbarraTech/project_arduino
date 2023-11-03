

#include <Arduino.h>
#include "modules/lcd/lcd.h"
#include "modules/sensor/sensor.cpp"

void setup()
{
  config();
  configuracion();
}

void loop()
{
  distance();
  distancia();
}

// #include "modules/lcd/lcd.h"
// // #include "modules/sensor/sensor.h"
// /*
// #define echo 8
// #define trig 9

// //sensor_ultrasonico miSensor(trig, echo);
// //pantalla_lcd miPantalla(12, 11, 5, 4, 3, 2);
// */
// void setup()
// {
//   // miSensor.iniciar();
//   // miPantalla.iniciar();
//   config();
// }

// void loop()
// {
//   count();
// }
// #define echo 8
// #define trig 9
// #include <LiquidCrystal.h>
// LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// long t, d;
// void setup()
// {
//   pinMode(trig, OUTPUT);
//   pinMode(echo, INPUT);
//   lcd.begin(16, 2);
//   lcd.setCursor(6, 0);
//   lcd.print("HOLA");
//   delay(2000);
//   lcd.clear();
//   lcd.setCursor(1, 0);
//   lcd.print("DISTANCIA (cm)");
// }

// void loop()
// {
//   digitalWrite(trig, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(trig, LOW);
//   t = pulseIn(echo, HIGH);
//   d = t / 58;
//   lcd.setCursor(14, 1);
//   lcd.print(d);
//   delay(500);
// }