#include "LedControl.h"
LedControl lc=LedControl(7,5,6,1); 
void setup() {
lc.shutdown(0,false);
lc.setIntensity(0,12); 
lc.clearDisplay(0);
}  
void loop() {
  lc.setLed(0,0,0,true);
  delay(1000);
  lc.setLed(0,1,1,true);
  delay(1000);
  lc.setLed(0,2,2,true);
  delay(1000);
  lc.setLed(0,3,3,true);
  delay(1000);
  lc.setLed(0,4,4,true);
  delay(1000);
  lc.setLed(0,5,5,true);
  delay(1000);
  lc.setLed(0,6,6,true);
  delay(1000);
  lc.setLed(0,7,7,true);
  delay(1000);
  lc.clearDisplay(0);
  delay(1000);
}
