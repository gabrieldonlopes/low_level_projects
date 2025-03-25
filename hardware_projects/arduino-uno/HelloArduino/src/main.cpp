#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  pinMode(5, OUTPUT); // definir pino de saída
  Serial.println("Hello from arduino");
}

void loop() {
  digitalWrite(5, HIGH);
  Serial.println("LED is on");
  delay(2000);
  digitalWrite(5, LOW);
  Serial.println("LED is off");
  delay(2000);

}
