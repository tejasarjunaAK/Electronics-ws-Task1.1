//Task1.1.7
#include <DHT.h>
int dht_pin=2;
DHT dht(dht_pin,DHT11);
void setup(){
 Serial.begin(9600);
 dht.begin();}
void loop(){
 float humidity =dht.readHumidity();
 float temp=dht.readTemperature();
 if (isnan(humidity)||isnan(temp)){
   Serial.println("failed to collect data");
   return;}
 Serial.print("humidity -");
 Serial.println(humidity);
 Serial.print("temperature-");
 Serial.print(temp);
 Serial.println("C");
 delay(1500);} 
