#include <OzOLED.h>

void setup() {
  Serial.begin(9600);

  OzOled.init();
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.print("Start");
  Serial.print("\n");
}

void loop() {
  Serial.println("go");
  Serial.println(123.546,1);
  
  digitalWrite(LED_BUILTIN, HIGH);  
  Serial.println(digitalRead(13));  
  OzOled.printString("13th pin : ", 0, 1);
  OzOled.printNumber((long)digitalRead(13), 11, 1);
  delay(2000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  Serial.println(digitalRead(13));
  OzOled.printString("13th pin : ", 0, 1);
  OzOled.printNumber((long)digitalRead(13), 11, 1);  
  delay(2000);                      
}
