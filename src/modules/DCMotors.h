#pragma once
#include <Arduino.h>

class DCMotors {
public:
  DCMotors(byte IN1Pin = 2, byte IN2Pin = 3, byte IN3Pin = 4, byte IN4Pin = 5);
  void loop();

  void setRightSpeed(int value);
  int getRightSpeed();
  void setLeftSpeed(int value);
  int getLeftSpeed();

private:
  byte IN1Pin, IN2Pin, IN3Pin, IN4Pin;
  // max speed: 255 | min speed: -255
  int leftSpeed = 0, rightSpeed = 0;
};