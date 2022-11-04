#include "LineFollower.h"
#define MAX_SPEED 200

LineFollower::LineFollower(IRSensors* irSensors, DCMotors* dcMotors, PowerManager* powerManager)
  : Driver(irSensors, dcMotors, powerManager) {

}
LineFollower::~LineFollower() {}
void LineFollower::loop() {


}