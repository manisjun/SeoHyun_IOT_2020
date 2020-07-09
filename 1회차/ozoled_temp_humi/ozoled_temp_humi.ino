#include <OzOLED.h>
#include <DHT.h>

#define DHTPIN A1
#define DHTTYPE DHT11
#define BUZERPIN 2

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  OzOled.init();
}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();
    
  OzOled.printString("humidity : ", 0, 0);
  OzOled.printNumber((long)h, 11, 0);
  OzOled.printString("temperature : ", 0, 1);
  OzOled.printNumber((long)t, 13, 1); 
  delay(2000);                      
}
