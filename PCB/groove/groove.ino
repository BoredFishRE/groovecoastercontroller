#include <Gamepad.h>
Gamepad gp;
void setup() {
  // put your setup code here, to run once:
  pinMode(16, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
}
void loop() {
  int UP, DOWN, LEFT, RIGHT, X, Y, A, B;
  UP = digitalRead(2);
  DOWN = digitalRead(3);
  LEFT = digitalRead(4);
  RIGHT = digitalRead(5);
  X = digitalRead(7);
  Y = digitalRead(9);
  A = digitalRead(8);
  B = digitalRead(6);
  if (UP == LOW)
    gp.setButtonState(2, true);
  else
    gp.setButtonState(2, false);

  if (DOWN == LOW)
    gp.setButtonState(3, true);
  else
    gp.setButtonState(3, false);

  if (LEFT == LOW)
    gp.setButtonState(4, true);
  else
    gp.setButtonState(4, false);

  if (RIGHT == LOW)
    gp.setButtonState(5, true);
  else
    gp.setButtonState(5, false);

  if (X == LOW)
    gp.setButtonState(8, true);
  else
    gp.setButtonState(8, false);

  if (Y == LOW)
    gp.setButtonState(9, true);
  else
    gp.setButtonState(9, false);

  if (A == LOW)
    gp.setButtonState(10, true);
  else
    gp.setButtonState(10, false);

  if (B == LOW)
    gp.setButtonState(11, true);
  else
    gp.setButtonState(11, false);

  delay(20);
}
