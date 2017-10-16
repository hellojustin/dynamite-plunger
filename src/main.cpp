#include <Arduino.h>

#define BUTTON                    8
#define OSX_KEYSTROKE_DELAY     200
#define KEYSTROKE_REPEAT_DELAY 2000

void dedupedKeystroke(int key)
{
  Keyboard.press(key);
  delay(OSX_KEYSTROKE_DELAY);
  Keyboard.release(key);
  delay(KEYSTROKE_REPEAT_DELAY);
}

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  if(digitalRead(BUTTON) == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
    dedupedKeystroke(KEY_ENTER);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
