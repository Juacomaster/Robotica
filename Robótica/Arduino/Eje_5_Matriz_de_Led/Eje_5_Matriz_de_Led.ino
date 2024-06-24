#include "LedControl.h" 
LedControl lc=LedControl(7,5,6,1);
int Fila=1;
int Columna=1;

void setup() {
lc.shutdown(0,false); 
lc.setIntensity(0,12);
lc.clearDisplay(0); 
}

void loop() {


for(Columna=1;Columna<7;Columna++){
lc.setLed(0,1,Columna,true);
lc.setLed(0,6,Columna,true);
delay(200);
}

for(Fila=1;Fila<7;Fila++){
lc.setLed(0,Fila,1,true);
lc.setLed(0,Fila,6,true);
delay(200);
}

lc.clearDisplay(0); 

}
