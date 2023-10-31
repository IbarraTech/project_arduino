#ifndef PANTALLA_LCD_H
#define PANTALLA_LCD_H

#include <Arduino.h>
#include <LiquidCrystal.h>

class PantallaLCD {
public:
    PantallaLCD(int rs, int en, int d4, int d5, int d6, int d7);
    void iniciar();
    void mostrarDistancia(float distancia);
private:
    LiquidCrystal _lcd;
};

#endif