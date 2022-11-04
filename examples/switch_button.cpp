#include <Arduino.h>

#define LED_PIN 2
#define BUTTON 3

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

int old_state = 1;
int led_state = 0;

void loop() {
  digitalWrite(LED_PIN, led_state);
  int new_state = digitalRead(BUTTON);
  if (old_state == 1 && new_state == 0) {
    led_state = !led_state;
    Serial.print("switching");
  }
  delay(100);
  old_state = new_state;
}