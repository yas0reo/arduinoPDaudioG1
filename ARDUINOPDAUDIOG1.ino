// Le code minimal

#include <Arduino.h> 

void setup() {
  Serial.begin(115200);

}

void loop() {
 Serial.print("TEMP"); // Descripteur
 Serial.print(" "); // Espace
 Serial.print(23); // Valeur
 Serial.println(); // Saut de ligne

}
