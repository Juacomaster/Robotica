int Trigger=4;
int Echo=7;
long tiempo;
int distancia=0;


void setup() {
Serial.begin(9600);
pinMode(Echo,INPUT);
pinMode(Trigger,OUTPUT);

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


}
