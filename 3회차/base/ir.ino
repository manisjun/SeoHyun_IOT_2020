int RECV_PIN = A0;

IRrecv irrecv(RECV_PIN);
decode_results results;


void ir_setup(){
  irrecv.enableIRIn();
}

void ir_loop(){
  if(irrecv.decode(&results)){
    input_check();
    irrecv.resume(); //다음 값을 입력 받는다.
  }
}

void input_check(){
     switch (results.value) { // 리모콘 버튼의 고유값에 따라
      case 0xFF6897 :  // 리모콘의 0버튼이 눌리면, 키 값에 대한 정보만 표시하고, LED 모두 끈다.
      //LED 가 동작하고 있으면 의미 없음.
        OzOled.init();
        analogWrite(9, 0);
        digitalWrite(8, LOW);
        LED_OLED(0, 0xFF6897);
        break;
      case 0xFF30CF :  // 리모콘의 1버튼이 눌리면,
        LED_OLED(1, 0xFF30CF);
        led_humi_temp = !led_humi_temp;
        break;
      case 0xFF10EF : // 리모콘의 4버튼이 눌리면,
        LED_OLED(4, 0xFF10EF);
        break;
      case 0xFF42BD : // 리모콘의 7버튼이 눌리면,
        LED_OLED(7, 0xFF42BD);
        break;
      case 0xFF18E7: // 리모콘의 2버튼이 눌리면,
        LED_OLED(2, 0xFF18E7);
        red_led_chk = !red_led_chk;
        break;
      case 0xFF38C7: // 리모콘의 5버튼이 눌리면,
        LED_OLED(5, 0xFF38C7);
        break;
      case 0xFF4AB5: // 리모콘의 8버튼이 눌리면,
        LED_OLED(8, 0xFF4AB5);
        break;
      case 0xFF7A85: // 리모콘의 3버튼이 눌리면,
        LED_OLED(3, 0xFF7A85);
        blue_led_chk = !blue_led_chk;
        break;
      case 0xFF5AA5: // 리모콘의 6버튼이 눌리면,
        LED_OLED(6, 0xFF5AA5);
        break;
      case 0xFF52AD: // 리모콘의 9버튼이 눌리면,
        LED_OLED(9, 0xFF52AD);
        break;
    } 
}


void LED_OLED(long num, long button){
  OzOled.printNumber(num, 0, 5);
  OzOled.printString(" bun : ", 1, 5);
  OzOled.printNumber(button, 7, 5);
}
