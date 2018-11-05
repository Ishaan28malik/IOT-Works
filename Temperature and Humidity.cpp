#include<dht.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
dht DHT;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
} 
void loop() {
  // put your main code here, to run repeatedly:

int chk = DHT.read11(9);
Serial.println(DHT.humidity,1);
Serial.println(DHT.temperature,1);
/*lcd.setCursor(0,0);
lcd.print("16x2 LCD MODULE");*/
lcd.setCursor(0,0);
lcd.print("Humidity");
lcd.setCursor(10,0);
lcd.print("=");
//lcd.setCursor(11,0);
//lcd.print(DHT.humidity);
//lcd.setCursor(12,0);
lcd.print(DHT.humidity);
lcd.setCursor(0,1);
lcd.print("Temperature");
lcd.setCursor(10,1);
lcd.print("=");
//lcd.setCursor(13,1);
//lcd.print(DHT.temperature);
//lcd.setCursor(14,1);
lcd.print(DHT.temperature);
delay(2000);
}
