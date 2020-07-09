int humi = 0;
int temp = 0;

boolean led_humi_temp = false;
boolean buzz = false;
boolean temp_chk = false;
boolean led = false;

void setup() {
  Serial.begin(9600);
  Ozo_setup();
  Serial_setup();
  Red_setup();
  Blue_setup(); 
}

void loop() {

  Humi_temp_loop();
  Serial_loop();

  if(led_humi_temp == true)
    Ozo_loop();
  if(buzz == true)
    Buzzer_loop();
  if(temp_chk == true){
    Ozo_loop();
    Buzzer_temp_loop();
  }
  if(led == true) {
    Red_loop();
    Blue_loop();              
  }
}
