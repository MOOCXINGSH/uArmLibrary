#include "uArm.h"

void setup() {
  Serial.begin(115200);  // start serial port at 115200 bps
  uArm.setup();
  debugPrint("yangjiaqing debug start"); // uncomment DEBUG in uArmConfig.h to use debug function

	// TODO
	uArm.moveTo(0, 0, 0);
	Serial.println("@1");	// report ready

}

void loop() {
  uArm.run();
}
