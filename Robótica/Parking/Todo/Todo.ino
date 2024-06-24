#include <DHT11.h> //DHT11 by Dhruba Saha
DHT11 dht11(3); // digo en que pin esta el sensor DHT11

int result=0;
int humedad=0;
int temperatura=0;

#include <Servo.h> 
Servo myServo;
Servo myServo2;

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);

int Plazas=0;

int servo=10;
int grados=0;
int servo2=11;
int grados2=0;

bool empezar0=0;

int coches=0;

int Led=2;
int LDR=0;

int Entrada1=4;
bool boolEntrada1=0;

int Entrada2=5;
bool boolEntrada2=0;

int Salida1=6;
bool boolSalida1=0;

int Salida2=7;
bool boolSalida2=0;

bool boolPasoEntrada=0;
bool mantenerEntrada=0;
bool boolPasoSalida=0;
bool mantenerSalida=0;

long tiempo=0;

void setup() {

millis();
tiempo=millis();

Serial.begin(9600);
pinMode(Entrada1,INPUT);
pinMode(Entrada2,INPUT);
pinMode(Salida1,INPUT);
pinMode(Salida2,INPUT);

myServo.attach(servo);
myServo2.attach(servo2);
pinMode(Led,OUTPUT);

 lcd.init(); 
 lcd.clear();
 lcd.backlight();
}

void loop() {
if(empezar0==0){
  empezar0=1;
  myServo.write(0);
  grados2=90;
  myServo2.write(90);
  delay(2000);
  Pantalla1();
}
sensores();
PasoEntrada();
luces();
PasoSalida();
Pantalla();
TyH ();
}


void sensores() {

boolEntrada1=digitalRead(Entrada1);
boolEntrada2=digitalRead(Entrada2);
boolSalida1=digitalRead(Salida1);
boolSalida2=digitalRead(Salida2);
Serial.println(boolEntrada1);
Serial.print("    ");
Serial.print(boolEntrada2);
Serial.print("    ");
Serial.print(boolSalida1);
Serial.print("    ");
Serial.print(boolSalida2);
Serial.print("    ");
Serial.print(coches);
Serial.print("    ");


}

void PasoEntrada() {

  if(boolEntrada1==1&&mantenerEntrada==0&&coches<8){
    mantenerEntrada=1;
    servoEntradaArriba();
  }

  if(boolEntrada2==1&&mantenerEntrada==1){
    boolPasoEntrada=1;
    //servo se queda arriba
  }

  if(boolEntrada2==0&&boolPasoEntrada==1&&mantenerEntrada==1){
    servoEntradaAbajo();
    boolPasoEntrada=0;
    mantenerEntrada=0;
    coches=coches+1;
  }
}

void servoEntradaArriba() {
    for(grados=0;grados<90;grados=grados+1){
luces();
    delay(30);
    myServo.write(grados);

  }
}

void servoEntradaAbajo(){
  for(grados=90;grados>0;grados=grados-1){
luces();
    delay(30);
    myServo.write(grados);

  }
}

void luces(){
  LDR=analogRead(A0);
if(LDR>300){
digitalWrite(Led,HIGH);}
else{digitalWrite(Led,LOW);}
}





void PasoSalida() {

  if(boolSalida1==1&&mantenerSalida==0&&coches>0&&coches<=8){
    mantenerSalida=1;
    servoSalidaArriba();
  }

  if(boolSalida2==1&&mantenerSalida==1){
    boolPasoSalida=1;
    //servo se queda arriba
  }

  if(boolSalida2==0&&boolPasoSalida==1&&mantenerSalida==1){
    servoSalidaAbajo();
    boolPasoSalida=0;
    mantenerSalida=0;
    coches=coches-1;
  }
}

void servoSalidaAbajo() {
    for(grados2=0;grados2<90;grados2=grados2+1){
luces();
    delay(30);
    myServo2.write(grados2);

  }
}

void servoSalidaArriba(){
  for(grados2=90;grados2>0;grados2=grados2-1){
luces();
    delay(30);
    myServo2.write(grados2);

  }
}



void Pantalla () {
  
  lcd.setCursor(2,1);
  lcd.print("Plazas libres:");
  Plazas=8-coches;
  lcd.print(Plazas);

  if (coches==8) {
    lcd.setCursor(3,0);
  lcd.print("PARKING OCUPADO");
  }
  else {
    lcd.setCursor(4,0);
  lcd.print("PARKING LIBRE");
  }

  lcd.setCursor(2,2);
  lcd.print("Temperatura:");
  lcd.setCursor(16,2);
  lcd.print(temperatura);
  lcd.print("C");

  lcd.setCursor(2,3);
  lcd.print("Humedad:");
  lcd.setCursor(16,3);
  lcd.print(humedad);
  lcd.print("%");



}

void TyH () {
if(millis()-tiempo>2000){
  result = dht11.readTemperatureHumidity(temperatura, humedad);
  tiempo=millis();
}
}

void Pantalla1() {
  lcd.setCursor(0,0);
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.print("*");
  delay(50);
  lcd.setCursor(19,1);
  lcd.print("*");
  delay(50);
  lcd.setCursor(19,2);
  lcd.print("*");
  delay(50);
  lcd.setCursor(19,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(18,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(17,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(16,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(15,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(14,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(13,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(12,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(11,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(10,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(9,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(8,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(7,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(6,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(5,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(4,3);
  lcd.print("*");
  delay(50);lcd.setCursor(3,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(2,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(1,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(0,3);
  lcd.print("*");
  delay(50);
  lcd.setCursor(0,2);
  lcd.print("*");
  delay(50);
  lcd.setCursor(0,1);
  lcd.print("*");

  delay(200);
  lcd.setCursor(6,1);
  lcd.print("PARKING");
  lcd.setCursor(5,2);
  lcd.print("TONTOROLO");
  delay(5000);
  lcd.clear();
}