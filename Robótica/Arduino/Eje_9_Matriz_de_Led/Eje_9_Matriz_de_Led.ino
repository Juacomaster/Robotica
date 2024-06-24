#include "LedControl.h" 
LedControl lc=LedControl(7,5,6,1);


int(X)=0;
int(Y)=0;
 
int(fila)=0;
int(columna)=0;

bool Pulsador=0;




void setup() {
Serial.begin(9600);
pinMode(10,INPUT_PULLUP);
lc.shutdown(0,false);
lc.setIntensity(0,12); 
lc.clearDisplay(0); 

}

void loop() {
X=analogRead(A0);
Y=analogRead(A1);
Pulsador=digitalRead(10);
Serial.println(X);
Serial.print("          ");
Serial.print(Pulsador);
Serial.print("          ");
Serial.print(Y);
Serial.print("          ");

lc.setLed(0,columna,fila,false);

if(Y<200 && columna<7){


  columna=columna+1;
  


}

if(Y>880 && columna>0){


  columna=columna-1;
  
  // delay(200);

}


if(X>880 && fila<7){


  fila=fila+1;
  


}

if(X<200 && fila>0){

  
  fila=fila-1;
  
  

}
lc.setLed(0,columna,fila,true);

delay(200);

if(Pulsador==0){

  lc.clearDisplay(0);
  lc.setLed(0,0,0,true);
  columna=0;
  fila=0;
}

}

