#ifndef LCD_H
#define LCD_H

#include <Arduino.h>
#include <LiquidCrystal.h>

class pantalla_lcd {
public:
    pantalla_lcd(int rs, int en, int d4, int d5, int d6, int d7);
    void iniciar();
    void mostrar_distancia(float distancia);
private:
    LiquidCrystal _lcd;
};

#endif