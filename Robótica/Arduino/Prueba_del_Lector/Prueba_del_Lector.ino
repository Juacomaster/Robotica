int Lector=5;
int Lector2=6;
int Lector3=7;
int Lector4=8;


bool Luz=0;
bool Luz2=0;
bool Luz3=0;
bool Luz4=0;

void setup() {
Serial.begin(9600);
pinMode(Lector,INPUT);
pinMode(Lector2,INPUT);
pinMode(Lector3,INPUT);
pinMode(Lector4,INPUT);

}

void loop() {

Luz=digitalRead(Lector);
Luz2=digitalRead(Lector2);
Luz3=digitalRead(Lector3);
Luz4=digitalRead(Lector4);
Serial.print(Luz);
Serial.print("      ");
Serial.print(Luz2);
Serial.print("      ");
Serial.print(Luz3);
Serial.print("      ");
Serial.println(Luz4);
delay(100);

}
