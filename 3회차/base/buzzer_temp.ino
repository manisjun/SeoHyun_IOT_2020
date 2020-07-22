int loop_cnt = 0;

void temp_Buzzer_setup() {

}

void Buzzer_temp_loop() {
  if(temp > 25 && loop_cnt <= 5) {
     melody_call();  
  }
  if(loop_cnt >= 1000){
    loop_cnt = 0;
  }
  loop_cnt ++;
}
