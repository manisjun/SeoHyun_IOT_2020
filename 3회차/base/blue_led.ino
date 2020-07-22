#define BLUE_PIN 9

boolean flag = true;
int fadeValue = 0;

unsigned long blue_led_previousMillis = 0;
long blue_led_interval = 60;

void Blue_setup(){
  pinMode(BLUE_PIN, OUTPUT);
}

void Blue_loop(){

  unsigned long currentMillis = millis();

  if( currentMillis - blue_led_previousMillis >= blue_led_interval ) {
      blue_led_previousMillis = currentMillis;
      if(flag == true){
       if(fadeValue <= 255) {
           fadeValue += 20;
           if(fadeValue > 255){
              fadeValue = 255;
              flag = false;
           }
       }
     }
     else {
      if(fadeValue >= 0) {
          fadeValue -= 20;
          if(fadeValue < 0){
              fadeValue = 0;
              flag = true;
          }
      }
    }
    analogWrite(BLUE_PIN, fadeValue);
  }
  
}
