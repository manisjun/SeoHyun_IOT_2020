#include "pitches.h"

#define BUZERPIN 6

unsigned long buz_previousMillis = 0;
long buz_interval = 5000;

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

//note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void Buzzer_setup() {

}

void Buzzer_loop() {

  unsigned long currentMillis = millis();
  if ( currentMillis - buz_previousMillis >= buz_interval ) {
    buz_previousMillis = currentMillis;
    melody_call();
  } 
}

void melody_call(){
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
   // tone(BUZERPIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
   // noTone(BUZERPIN);
  }
}
