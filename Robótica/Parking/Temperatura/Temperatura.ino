#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);

#include <DHT11.h> //DHT11 by Dhruba Saha
DHT11 dht11(3); // digo en que pin esta el sensor DHT11

int result=0;
int humedad=0;
int temperatura=0;

void setup() {
  // put your setup code here, to run once:
 lcd.init(); 
 lcd.clear();
 lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(2,2);
  lcd.print(temperatura);
  lcd.setCursor(2,3);
  lcd.print(humedad);

  TyH ();
}

void TyH () {
    result = dht11.readTemperatureHumidity(temperatura, humedad);
  delay(2000);
}