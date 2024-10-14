// Code for Snake Game
// 4 buttons that can control keyboard up/down/left/right
// One switch to turn the functionality on and off as necessary
// Input pullup means no need for 10k resistor
// Bottom button legs to 5V and GND, top right leg to pin
// Switch to GND and pin 7

#include "Keyboard.h"

// set pin numbers for the four buttons and one switch:
const int upButton = 2;
const int downButton = 3;
const int leftButton = 4;
const int rightButton = 5;
const int switchPin = 7;


void setup() {
  pinMode(upButton, INPUT_PULLUP);
  pinMode(downButton, INPUT_PULLUP);
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(switchPin, INPUT_PULLUP); // no need for an external resistor

  // initialize keyboard and serial control:
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
// create a boolean state for the switch
  bool switchState = digitalRead(switchPin);

  // if the switch state is true, run the keyboard code. otherwise, don't!
  if (switchState == true) {
    //Serial.println("on");

    if (digitalRead(upButton) == LOW) {
    Serial.println(upButton);
    Keyboard.write(218);
    }
    if (digitalRead(downButton) == LOW) {
    Serial.println(downButton);
    Keyboard.write(217);
    }
    if (digitalRead(leftButton) == LOW) {
    Serial.println(leftButton);
    Keyboard.write(216);
    }
    if (digitalRead(rightButton) == LOW) {
    Serial.println(rightButton);
    Keyboard.write(215);
    }
  }
  else{
    Serial.println("off");
  }
  // add a little delay to help keep things under control
  delay(50);
}