#include <Servo.h> 
Servo myServo;

int servo=10;
int grados=15;

void setup() {
myServo.attach(servo);
Serial.begin(9600);
}

void loop() {
myServo.write(15);
  for(grados=15;grados<165;grados=grados+1){

    delay(30);
    myServo.write(grados);

  }

Serial.println(grados);
    for(grados=165;grados>15;grados=grados-1){

    delay(30);
    myServo.write(grados);

  }
Serial.println(grados);
 }
