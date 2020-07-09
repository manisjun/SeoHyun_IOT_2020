#define RED_PIN 8

void Red_setup(){
  pinMode(RED_PIN, OUTPUT);
}

void Red_loop(){
  digitalWrite(RED_PIN, digitalRead(RED_PIN)^1);
  delay(300);
}
