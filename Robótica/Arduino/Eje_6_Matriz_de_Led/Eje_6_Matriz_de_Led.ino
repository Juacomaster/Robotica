#include "LedControl.h" 
LedControl lc=LedControl(7,5,6,1);
int contador=0;


void setup() {
Serial.begin(9600);
lc.shutdown(0,false); 
lc.setIntensity(0,12); 
lc.clearDisplay(0); 
}
void loop() {

for(contador=0;contador<29;contador++){
  
  if(contador<5){

    Serial.println(contador);
    lc.setLed(0,4,4,true);
    delay(1000);
    lc.setLed(0,4,4,false);
    delay(1000);
  }

  if(contador>4&&contador<10){

    Serial.println(contador);
    lc.setLed(0,4,4,true);
    delay(900);
    lc.setLed(0,4,4,false);
    delay(900);

  }

    if(contador>9&&contador<15){

    Serial.println(contador);
    lc.setLed(0,4,4,true);
    delay(800);
    lc.setLed(0,4,4,false);
    delay(800);

  }

    if(contador>14&&contador<20){

    Serial.println(contador);
    lc.setLed(0,4,4,true);
    delay(700);
    lc.setLed(0,4,4,false);
    delay(700);

  }

    if(contador>19&&contador<25){

    Serial.println(contador);
    lc.setLed(0,4,4,true);
    delay(600);
    lc.setLed(0,4,4,false);
    delay(600);

  }

    if(contador>24&&contador<30){

    Serial.println(contador);
    lc.setLed(0,4,4,true);
    delay(500);
    lc.setLed(0,4,4,false);
    delay(500);

  }


}

}
