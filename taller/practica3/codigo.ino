/*
  Proyecto: RGB LED
  Autor: Adafruit
  Referencia: https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds
  Adaptado por Ulises Gascón
*/
 
int pinRojo = 11;
int pinVerde = 10;
int pinAzul = 9;

void setup()
{
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);  
}
 
void loop()
{
  setColor(255, 0, 0);  // Rojo
  delay(1000);
  setColor(0, 255, 0);  // Verde
  delay(1000);
  setColor(0, 0, 255);  // Azul
  delay(1000);
  setColor(255, 255, 0);  // Amarillo
  delay(1000);  
  setColor(80, 0, 80);  // Púrpura
  delay(1000);
  setColor(0, 255, 255);  // Azul agua
  delay(1000);
}
 
void setColor(int rojo, int verde, int azul)
{
  analogWrite(pinRojo, rojo);
  analogWrite(pinVerde, verde);
  analogWrite(pinAzul, azul);  
}