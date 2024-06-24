#include "LedControl.h" 
LedControl lc=LedControl(7,5,6,1); 
int Columna=0;
int Fila=0;
void setup() {
lc.shutdown(0,false); 
lc.setIntensity(0,12); 
lc.clearDisplay(0); 
}

void loop() {
for(Columna=0;Columna<8;Columna++) {

    lc.setLed(0,Columna,Columna,true);
  
}
delay(1000);
lc.clearDisplay(0); 
delay(1000);
}
