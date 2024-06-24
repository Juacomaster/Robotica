int LinI=13;
int LinD=12;
bool LuzI=0;
bool LuzD=0;
int FarosD=2;
int FarosA=3;
int MDAl=6;
int MIAl=11;
int VM=90;
int VA=130;
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



LuzI=digitalRead(LinI);
Serial.println(LuzI);
Serial.print("  ");
LuzD=digitalRead(LinD);
Serial.print(LuzD);


if(LuzI==0&&LuzD==0){
analogWrite(MDAl,VM);
analogWrite(MIAl,VM);
}

if(LuzI==0&&LuzD==1){
analogWrite(MDAl,0);
analogWrite(MIAl,VA);
}

if(LuzI==1&&LuzD==0){
analogWrite(MDAl,VA);
analogWrite(MIAl,0);
}


}