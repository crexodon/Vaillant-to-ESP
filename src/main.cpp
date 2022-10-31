#include <Arduino.h>
#include <Wire.h>
#include <OneWire.h>
#include <LiquidCrystal.h>


//LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
LiquidCrystal lcd(D6, D5, D1, D2, D3, D4); 

void setup()
  {
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello");
  }

void loop()
  {
      lcd.clear();
  digitalWrite(LED_BUILTIN, HIGH);
  lcd.setCursor(0,0);
  lcd.print("Hello");
  delay(500);
  lcd.clear();
  digitalWrite(LED_BUILTIN, LOW);
  lcd.setCursor(0,1);
  lcd.print("World");
  
  delay(500);
  
  }