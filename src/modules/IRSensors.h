#pragma once
#include <arduino.h>

class IRSensors {
private:
  byte leftIRPin, middlePin, rightIRPin;
public:
  IRSensors(byte leftIRPin, byte middlePin, byte rightIRPin);
  bool isLeftOnBlack();
  bool isMiddleOnBlack();
  bool isRightOnBlack();
};
