int LinI=13;
int LinD=12;
bool LuzI=0;
bool LuzD=0;
int FarosD=2;
int FarosA=3;
int MDAl=6;
int MIAl=11;
int VM=110;
int MIAt=10;
int MDAt=5;

void setup() {

Serial.begin(9600);
pinMode(LinI,INPUT);
pinMode(LinD,INPUT);
pinMode(FarosD,OUTPUT);
pinMode(FarosA,OUTPUT);

}

void loop() {

digitalWrite(FarosD,HIGH);
analogWrite(MDAl,VM);
analogWrite(MIAl,VM);

LuzI=digitalRead(LinI);
Serial.println(LuzI);
Serial.print("  ");
LuzD=digitalRead(LinD);
Serial.print(LuzD);

if(LuzI==0||LuzD==0){

analogWrite(MDAl,0);
analogWrite(MIAl,0);
delay(2000);
digitalWrite(FarosA,HIGH);
analogWrite(MIAt,VM);
analogWrite(MDAl,VM);
delay(1000);
analogWrite(MIAt,0);
analogWrite(MDAl,0);
delay(2000);
digitalWrite(FarosA,LOW);
}




}
