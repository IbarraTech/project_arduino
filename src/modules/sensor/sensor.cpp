#include <Arduino.h>
#define echo 8
#define trig 9
long t, d;
// #include "LiquidCrystal.h"
// const int echo=8, trigger=9;
// LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void configuracion()
{
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    // lcd.begin(16, 2);
    // lcd.setCursor(6, 0);

    // lcd.setCursor(1, 0);
    // lcd.print("DISTANCIA (cm)");
    // lcd.begin(16, 2);
    // lcd.print("mi config");
}

// int a = 0;

void distancia()
{
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    t = pulseIn(echo, HIGH);
    d = t / 58;
    // lcd.setCursor(14, 1);
    // lcd.print(d);
    // delay(500);
    // lcd.setCursor(0, 1);
    // delay(500);
    // lcd.print(a);
    // a++;
}