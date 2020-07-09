#define BLUE_PIN 9

boolean flag = true;
int fadeValue = 0;

void Blue_setup(){
  pinMode(BLUE_PIN, OUTPUT);
}

void Blue_loop(){
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
