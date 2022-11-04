#include "SimpleForward.h"

SimpleForward::SimpleForward(IRSensors* irSensors, DCMotors* dcMotors, PowerManager* powerManager)
  : Driver(irSensors, dcMotors, powerManager) {
}
SimpleForward::~SimpleForward() {}

void SimpleForward::loop() {

}