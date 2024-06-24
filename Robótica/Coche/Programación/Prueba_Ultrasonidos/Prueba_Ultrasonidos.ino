int Trigger=4;
int Echo=7;
long tiempo;
int distancia=0;

int LedA=2;
int LedB=3;
int MDAl=6;
int MIAl=11;
int VM=100;
int MIAt=10;
int MDAt=5;

void setup() {
Serial.begin(9600);
pinMode(Echo,INPUT);
pinMode(Trigger,OUTPUT);

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
// ************************    mido distancia
digitalWrite(Trigger, LOW);
delayMicroseconds(2);
digitalWrite(Trigger, HIGH);
delayMicroseconds(10);
digitalWrite(Trigger, LOW);

tiempo=(pulseIn(Echo,HIGH));

distancia=tiempo*0.017;

Serial.println(distancia);
// **********************************************



if(distancia<30){
 // ******* lo paro 
digitalWrite(LedA,LOW);
analogWrite(MDAl,0);
analogWrite(MIAl,0);
delay (1000);
// ************ giro
digitalWrite(LedB,HIGH);
analogWrite(MDAl,VM);
analogWrite(MIAl,0);
analogWrite(MIAt,VM);
delay(1000);
// ******* lo paro 
digitalWrite(LedB,LOW);
analogWrite(MDAl,0);
analogWrite(MIAl,0);
analogWrite(MIAt,0);

}
else {
digitalWrite(LedA,HIGH);
analogWrite(MDAl,VM);
analogWrite(MIAl,VM);
}

}
