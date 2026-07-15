#include <Servo.h>

Servo panServo;
Servo tiltServo;

const int PAN_PIN = 10;
const int TILT_PIN = 11;

void setup() {
  // Start both servos at center
  panServo.attach(PAN_PIN);
  tiltServo.attach(TILT_PIN);

  panServo.write(90);
  tiltServo.write(90);
  delay(1500);
// Safe pan test
panServo.write(120);
delay(1000);
panServo.write(60);
delay(1000);
panServo.write(90);
delay(1500);

// Safe tilt test
tiltServo.write(110);  // Up
delay(1000);
tiltServo.write(85);   // Maximum safe downward tilt
delay(1000);
tiltServo.write(90);   // Center
delay(1000);

  // Stop sending movement commands
  panServo.detach();
  tiltServo.detach();
}

void loop() {
  // Test runs only once
}