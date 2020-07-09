#include <OzOLED.h>
#include <DHT.h>
#include "pitches.h"

#define DHTPIN A1
#define DHTTYPE DHT11
#define BUZERPIN 8

DHT dht(DHTPIN, DHTTYPE);

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int cnt = 3;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  if(t > 25) {
    melody_call();
    cnt --;
    if(cnt == 0) while(1);
  }
  Serial.println(cnt);
  
  delay(1000);

}

void melody_call(){
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZERPIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZERPIN);
  }
}
