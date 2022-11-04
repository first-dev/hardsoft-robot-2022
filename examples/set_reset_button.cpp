#include <Arduino.h>

// C++ code
#define LED_PIN 2
#define SET_BUTTON 3
#define RESET_BUTTON 4
//
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(SET_BUTTON, INPUT_PULLUP);
  pinMode(RESET_BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

int led_state = 1;

void loop()
{    
  digitalWrite(LED_PIN, led_state);
  int is_set = digitalRead(SET_BUTTON);
  int is_reset = digitalRead(RESET_BUTTON);
  if (is_set == LOW){
    led_state = 1;
  }
  if (is_reset == LOW){
    led_state = 0;
  }
  delay(1);
  // Serial.print("SET = ");
  // Serial.print(is_set);
  // Serial.print("\n");
  // Serial.print("RESET = ");
  // Serial.print(is_reset);
  // Serial.print("\n");
  // delay(1000);
  
}