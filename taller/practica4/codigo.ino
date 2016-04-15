/*
  Proyecto: Inputs
  Autor: Adafruit
  Referencia: https://learn.adafruit.com/adafruit-arduino-lesson-6-digital-inputs
  Adaptado por Ulises Gascón
*/
int pinLed = 5;
int pinBotonA = 9;
int pinBotonB = 8;
 
byte leds = 0;
 
void setup() 
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotonA, INPUT_PULLUP);  
  pinMode(pinBotonB, INPUT_PULLUP);  
}
 
void loop() 
{
  if (digitalRead(pinBotonA) == LOW)
  {
    digitalWrite(pinLed, HIGH);
  }
  if (digitalRead(pinBotonB) == LOW)
  {
    digitalWrite(pinLed, LOW);
  }
}