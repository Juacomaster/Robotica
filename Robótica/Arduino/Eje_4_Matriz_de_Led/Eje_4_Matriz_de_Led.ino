#include "LedControl.h" 
LedControl lc=LedControl(7,5,6,1);
int Columna=0;

void setup() {
lc.shutdown(0,false); 
lc.setIntensity(0,12); 
lc.clearDisplay(0); 
}
void loop() {
for(Columna=0;Columna<8;Columna++){
lc.setLed(0,Columna,4,true);
lc.setLed(0,Columna-1,4,false);
delay(200);
}
for(Columna=7;Columna>-1;Columna--){
lc.setLed(0,Columna,4,true);
lc.setLed(0,Columna+1,4,false);
delay(200);
}

}
