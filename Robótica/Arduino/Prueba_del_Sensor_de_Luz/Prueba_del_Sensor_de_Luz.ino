int SensorLuz=2;
bool Luz=0;

void setup() {
Serial.begin(9600);
pinMode(SensorLuz,INPUT);

}

void loop() {

Luz=digitalRead(SensorLuz);
Serial.println(Luz);
delay(100);

}
