/*
  Proyecto: Blink
  Autor: Adafruit
  Referencia: https://learn.adafruit.com/adafruit-arduino-lesson-1-blink/.
  Adaptado por Ulises Gascón
 */
 
// Usamos el LED que esta conectado por defecto al PIN 13.
// Le ponemos Nombre:
int miLed = 13;

// Setup se ejecuta una vez:
void setup() {                
  // Poner el PIN en modo SALIDA.
  pinMode(miLed, OUTPUT);     
}

// Loop se ejecutará por siempre:
void loop() {
  digitalWrite(miLed, HIGH);   // Encendemos el LED (Subimos (HIGH) el voltaje)
  delay(1000);               // Esperamos un segundo (1000 milisegundos)
  digitalWrite(miLed, LOW);    // Apagamos el LED (Bajamos (LOW) el voltaje)
  delay(1000);               // Esperamos un segundo (1000 milisegundos)
}