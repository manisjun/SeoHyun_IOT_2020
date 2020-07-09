#include <OzOLED.h>

void Ozo_setup() {
  OzOled.init();
}

void Ozo_loop() {
  OzOled.printString("humidity : ", 0, 0);
  OzOled.printNumber((long)humi, 11, 0);
  OzOled.printString("temperature : ", 0, 1);
  OzOled.printNumber((long)temp, 13, 1);                      
}
