#include <Arduino.h>

#define LED_BUILTIN 13
#define BUTTON 8

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  if(digitalRead(BUTTON) == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
    Keyboard.press(KEY_ENTER);
    delay(200);
    Keyboard.release(KEY_ENTER);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
