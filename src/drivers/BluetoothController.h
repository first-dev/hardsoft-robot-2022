#pragma once
#include "Arduino.h"
#include "Driver.h"
class BluetoothController : public Driver {
public:
  BluetoothController(IRSensors*, DCMotors*, PowerManager*);
  ~BluetoothController();
  void loop();
};