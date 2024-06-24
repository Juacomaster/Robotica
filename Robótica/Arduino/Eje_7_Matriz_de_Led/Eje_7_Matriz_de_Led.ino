#include "LedControl.h"
LedControl lc=LedControl(7,5,6,1);
int fila=0;

void setup() {
Serial.begin(9600);
lc.shutdown(0,false);
lc.setIntensity(0,12);
lc.clearDisplay(0);
}
void loop() {
int numero = 0;
if (Serial.available() > 0) {
char entrada = Serial.read();
numero = String(entrada).toInt();
}

if(numero==1){
  for(fila=0;fila<8;fila++){
    lc.setLed(0,fila,4,true);
  }
}

if(numero==2){
  for(fila=0;fila<8;fila++){
    lc.setLed(0,fila,4,false);
  }
}
}