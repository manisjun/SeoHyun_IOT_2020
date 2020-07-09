int loop_cnt = 0;

void Buzzer_temp_setup() {

}

void Buzzer_temp_loop() {
  
  if(temp > 25 && loop_cnt <= 5) {
    temp_melody_call();
  }
  if(loop_cnt >= 20){
    loop_cnt = 0;
  }

  loop_cnt ++;
  
}

void temp_melody_call(){
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZERPIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZERPIN);
  }
}
