int input_menu = 0;

void Serial_setup(){
  Showmenu();
}

void Serial_loop(){
  if (Serial.available() > 0) {
    
    input_menu = Serial.read();
    if(input_menu != char(10)) {
      Serial.print("사용자 선택 : ");
      Serial.println((char)input_menu);
    }
 
    switch(input_menu){      
      case '1' : led_humi_temp = !led_humi_temp;
       OzOled.init();
       break;
      case '2' : buzz = !buzz;
       OzOled.init();
       break;
      case '3' : temp_chk = !temp_chk;
       OzOled.init();
       break;
      case '4' : red_led_chk = !red_led_chk;
       OzOled.init();
       break;       
      case '5' : blue_led_chk = !blue_led_chk;
       OzOled.init();
       break;       
      case char(10):
       break;
      default:
       Serial.println("1~5까지 입력하세요");
       break;
   }
  }
}

void Showmenu(){
  Serial.println("1. 온습도 표시/끄기");
  Serial.println("2. 멜로디 재생/끄기");
  Serial.println("3. 온도 체크/취소");
  Serial.println("4. 빨강 LED 켜기/끄기");
  Serial.println("5. 초록 LED 켜기/끄기");
}
