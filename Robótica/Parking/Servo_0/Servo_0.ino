#include <Servo.h> 
Servo myServo;

int servo=9;

void setup() {
myServo.attach(servo);
}

void loop() {
myServo.write(0);
}