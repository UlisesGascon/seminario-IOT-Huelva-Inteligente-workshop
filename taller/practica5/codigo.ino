/*
  Proyecto: RGB Fader
  Autor: Adafruit
  Referencia: https://learn.adafruit.com/adafruit-arduino-lesson-7-make-an-rgb-led-fader
  Adaptado por Ulises Gascón
*/

int pinLedRojo = 11;
int pinLedVerde = 10;
int pinLedAzul = 9;
 
int pinInterruptorRojo = 7;
int pinInterruptorVerde = 6;
int pinInterruptorAzul = 5;
 
int valorRojo = 0;
int valorAzul = 0;
int valorVerde = 0;
 
void setup()
{
  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAzul, OUTPUT);  
  pinMode(pinInterruptorRojo, INPUT_PULLUP);
  pinMode(pinInterruptorVerde, INPUT_PULLUP);
  pinMode(pinInterruptorAzul, INPUT_PULLUP);
}
 
void loop()
{
  if (digitalRead(pinInterruptorRojo) == LOW)
  {
    valorRojo ++;
    if (valorRojo > 255) valorRojo = 0;
  }
  if (digitalRead(pinInterruptorVerde) == LOW)
  {
    valorVerde ++;
    if (valorVerde > 255) valorVerde = 0;
  }
  if (digitalRead(pinInterruptorAzul) == LOW)
  {
    valorAzul ++;
    if (valorAzul > 255) valorAzul = 0;
  }
  analogWrite(pinLedRojo, valorRojo);
  analogWrite(pinLedVerde, valorVerde);
  analogWrite(pinLedAzul, valorAzul);  
  delay(10);
}
