#pragma once
#include <Arduino.h>

class Bluetooth {
public:
  Bluetooth(byte IN1Pin = 2, byte IN2Pin = 3, byte IN3Pin = 4, byte IN4Pin = 5);
  void loop();

  void sendMessage(byte value);
  /**
   * return -1 if no data available
  */
  int readMessage();

private:

};