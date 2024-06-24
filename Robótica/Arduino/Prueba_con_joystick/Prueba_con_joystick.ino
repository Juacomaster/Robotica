int(X)=0;
int(Y)=0;

bool(Pulsador)=0;



void setup() {
Serial.begin(9600);
pinMode(Pulsador,INPUT);

}

void loop() {
X=analogRead(A0);
Y=analogRead(A1);
Pulsador=digitalRead(10);
Serial.println(Pulsador);
Serial.print("        ");
Serial.print(X);
Serial.print("        ");
Serial.print(Y);


}
