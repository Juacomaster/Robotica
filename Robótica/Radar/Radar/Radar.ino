#include <Servo.h> 
Servo myServo;

int servo=10;
int grados=15;


int Trigger=4;
int Echo=7;
long tiempo;
int distancia=0;

void setup() {
myServo.attach(servo);
Serial.begin(9600);

pinMode(Echo,INPUT);
pinMode(Trigger,OUTPUT);

}

void loop() {
myServo.write(15);
  for(grados=15;grados<165;grados=grados+1){

    delay(15);
    myServo.write(grados);

    // ************************    mido distancia
digitalWrite(Trigger, LOW);
delayMicroseconds(2);
digitalWrite(Trigger, HIGH);
delayMicroseconds(10);
digitalWrite(Trigger, LOW);

tiempo=(pulseIn(Echo,HIGH));

distancia=tiempo*0.017;

Serial.print(grados);
Serial.print(",");
Serial.print(distancia);
Serial.print(".");
// **********************************************

  }


    for(grados=165;grados>15;grados=grados-1){

    delay(15);
    myServo.write(grados);

    // ************************    mido distancia
digitalWrite(Trigger, LOW);
delayMicroseconds(2);
digitalWrite(Trigger, HIGH);
delayMicroseconds(10);
digitalWrite(Trigger, LOW);

tiempo=(pulseIn(Echo,HIGH));

distancia=tiempo*0.017;

Serial.print(grados);
Serial.print(",");
Serial.print(distancia);
Serial.print(".");
// **********************************************

  }

 }
