#include <Arduino.h>
#include "drivers/DriversManager.h"

#define IR_VCC 8
#define IR_GRD 9
#define IR_OUT 10

// DriversManager driverManager;
IRSensors irSensors;

void setup() {
  pinMode(IR_VCC, OUTPUT);
  pinMode(IR_GRD, OUTPUT);
  pinMode(IR_OUT, INPUT);
  Serial.begin(9600);
  irSensors = IRSensors(3, 4, 5);
  // driverManager.loadDriver(DriversManager::SIMPLE_FORWARD);
}

void loop() {
  digitalWrite(IR_VCC, HIGH);
  digitalWrite(IR_GRD, LOW);
  int result = digitalRead(IR_OUT);
  Serial.print("State = ");
  Serial.print(result);
  Serial.print("\n");
  delay(100);
  // driverManager.loop();
}