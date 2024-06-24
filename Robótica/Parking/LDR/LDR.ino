int Led=13;
int LDR=0;

void setup() {
pinMode(Led,OUTPUT);
Serial.begin(9600);
}

void loop() {

// Serial.println(LDR);
luces();

}


void luces(){
  LDR=analogRead(A0);
if(LDR>300){
digitalWrite(Led,HIGH);}
else{digitalWrite(Led,LOW);}
}