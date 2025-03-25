#include <Arduino.h>

#define LED 2

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello World from Setup!");
}

void loop() {                     
  delay(1000);
  digitalWrite(LED, HIGH);
  Serial.println("Hello World from Loop!");
  delay(1000);
  digitalWrite(LED, LOW);
}

