#include <DHT.h>

#define DHTPIN A1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void Humi_temp_setup() {
  
}

void Humi_temp_loop() {
  humi = dht.readHumidity();
  temp = dht.readTemperature();                     
}
