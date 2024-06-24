#include <Servo.h> 
Servo myServo;

int servo=10;
int grados=0;

void setup() {
myServo.attach(servo);
Serial.begin(9600);
}

void loop() {
myServo.write(0);
  for(grados=0;grados<90;grados=grados+1){

    delay(30);
    myServo.write(grados);

  }

Serial.println(grados);
    for(grados=90;grados>0;grados=grados-1){

    delay(30);
    myServo.write(grados);

  }
Serial.println(grados);
 }
