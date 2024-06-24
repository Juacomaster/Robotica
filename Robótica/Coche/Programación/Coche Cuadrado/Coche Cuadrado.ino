int LedA=2;
int LedB=3;
int repetir=0;
int MDAl=6;
int MIAl=11;
int VM=150;
int MIAt=10;
int MDAt=5;

void setup() {

}

void loop() {
for(repetir=0;repetir<4;repetir++){
digitalWrite(LedA,HIGH);
delay(500);
digitalWrite(LedA,LOW);
delay(500);}

for(repetir=0;repetir<4;repetir++){
digitalWrite(LedB,HIGH);
delay(500);
digitalWrite(LedB,LOW);
delay(500);}

for(repetir=0;repetir<4;repetir++){

analogWrite(MDAl,VM);
analogWrite(MIAl,VM);
delay(3000);
analogWrite(MIAl,0);
analogWrite(MIAt,VM);
delay(500);
analogWrite(MIAt,0);

}

analogWrite(MDAl,0);
analogWrite(MIAl,0);

}
