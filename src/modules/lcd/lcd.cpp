#include <Arduino.h>
#include "LiquidCrystal.h"
#include "modules/sensor/sensor.cpp"
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void config()
{
    lcd.begin(16, 2);
    lcd.setCursor(6, 0);

    lcd.setCursor(1, 0);
    lcd.print("DISTANCIA (cm)");
    // lcd.begin(16, 2);
    // lcd.print("mi config");
}

// int a = 0;

void distance()
{
    lcd.setCursor(14, 1);
    lcd.print(d);
    delay(500);
    // lcd.setCursor(0, 1);
    // delay(500);
    // lcd.print(a);
    // a++;
}