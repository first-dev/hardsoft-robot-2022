#include "BluetoothController.h"

BluetoothController::BluetoothController(IRSensors* irSensors, DCMotors* dcMotors, PowerManager* powerManager)
  : Driver(irSensors, dcMotors, powerManager) {
}
BluetoothController::~BluetoothController() {}

void BluetoothController::loop() {

}