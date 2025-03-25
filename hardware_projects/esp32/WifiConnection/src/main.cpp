#include <Arduino.h>
#include <WiFi.h>

#define WIFI_SSID "SANDRA"
#define WIFI_PASSWORD "40302010"
#define LED 2

void setup() {
  Serial.begin(921600); // conexao com serial
  pinMode(LED, OUTPUT); // utilizando LED embutido 

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD); // conexao com internet

  Serial.println("starting");
}

bool isConnected = false;

void loop() {
  if (WiFi.status() == WL_CONNECTED && !isConnected){ // se tiver conseguido conectar
    Serial.println("Connected");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
    digitalWrite(LED, HIGH);
    isConnected = true;
  }

  if(WiFi.status() != WL_CONNECTED){ // enquanto nao conectar
    Serial.println(".");
    digitalWrite(LED, !digitalRead(LED)); // comando para piscar led
    delay(1000);
    isConnected = false; // caso a conexao tenha caído
  }
}

