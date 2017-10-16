#include "Arduino.h"

#define LED_BUILTIN 13
#define BUTTON 9
#define ASCII_NEWLINE 10
#define ASCII_CARRIAGE_RETURN 13
#define ASCII_BACKSPACE 27


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  if(digitalRead(BUTTON) == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
