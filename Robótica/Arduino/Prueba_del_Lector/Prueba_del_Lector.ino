int Lector=12;
bool Luz=0;

void setup() {
Serial.begin(9600);
pinMode(Lector,INPUT);

}

void loop() {

Luz=digitalRead(Lector);
Serial.println(Luz);
delay(100);

}
