#include <DHT.h>
#define DHTPIN A1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); //시리얼 통신 설정

}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print("humidity : "); //텍스트 출력
  Serial.println(h);
  Serial.print("temperature : ");
  Serial.println(t);

  delay(1000);

}
