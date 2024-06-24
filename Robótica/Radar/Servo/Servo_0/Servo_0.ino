#include <Servo.h> 
Servo myServo;

int servo=10;

void setup() {
myServo.attach(servo);
}

void loop() {
myServo.write(0);
}
