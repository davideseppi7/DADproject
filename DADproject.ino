#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(7000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
   for (int i = 0; i <1; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(60);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(600);
  for (int i = 0; i <16; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(60);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(600);
 for (int i = 0; i <21; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(90);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(4000);
for (int i = 0; i <12; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(200);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(600);
for (int i = 0; i <2; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(100);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(6000);
 for (int i = 0; i <20; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(225);              //caricamento
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);
 for (int i = 0; i <11; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(400);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5000);
 for (int i = 0; i <4; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(60);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(600);
 for (int i = 0; i <1; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(60);
  }
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(600);
}
// the loop function runs over and over again forever
void loop() {

}
