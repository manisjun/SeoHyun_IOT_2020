#define RED_PIN 8

unsigned long red_led_previousMills = 0;
long red_led_interval = 2000;

void Red_setup(){
  pinMode(RED_PIN, OUTPUT);
}

void Red_loop(){

  unsigned long currentMillis = millis();

  if(currentMillis - red_led_previousMills >= red_led_interval) {
    red_led_previousMills = currentMillis;
    digitalWrite(RED_PIN, digitalRead(RED_PIN)^1);
  }  
}
