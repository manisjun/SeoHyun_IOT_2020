void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.print("Start");
  Serial.print("\n");
}

void loop() {
  Serial.println("go");
  Serial.println(123.546,1);

/*  
  digitalWrite(LED_BUILTIN, HIGH);  
  Serial.println(digitalRead(13));  
  delay(2000);                      
  digitalWrite(LED_BUILTIN, LOW);  
  Serial.println(digitalRead(13));    
  delay(2000);                     

*/
  digitalWrite(13, digitalRead(13)^1);
  Serial.println(digitalRead(13));
  delay(2000);
}
