void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.print("Start");
  Serial.print("\n");
}

void loop() {
  Serial.println("go");
  Serial.println(123.546,1);
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println(digitalRead(13));  
  delay(2000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.println(digitalRead(13));    
  delay(2000);                       // wait for a second

/*
  digitalWrite(13, digitalRead(13)^1);
  Serial.println(digitalRead(13));
  delay(2000);
*/  
}
