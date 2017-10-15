#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif
#ifndef BUTTON
#define BUTTON 9
#endif

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
