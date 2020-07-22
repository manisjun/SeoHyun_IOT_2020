#include <IRremote.h>

int humi = 0;
int temp = 0;

boolean led_humi_temp = false;
boolean buzz = false;
boolean temp_chk = false;
boolean red_led_chk = false;
boolean blue_led_chk = false;

void setup() {
  Serial.begin(9600);
  ir_setup();
  Ozo_setup();
  Serial_setup();
  Red_setup();
  Blue_setup();
}

void loop() {

  Humi_temp_loop();
  Serial_loop();
  ir_loop();

  if(led_humi_temp == true)
    Ozo_loop();
  if(buzz == true)
    Buzzer_loop();
  if(temp_chk == true){
    Ozo_loop();
    Buzzer_temp_loop();
  }
  if(red_led_chk == true){
    //Ozo_loop();
    Red_loop();
  }
  if(blue_led_chk == true){
    //Ozo_loop();
    Blue_loop();
  }
}
