#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, 
  JOYSTICK_TYPE_GAMEPAD, 12, 0,
  true, true, false, false, false, false,
  false, false, false, false, false);


void setup() {

  Joystick.begin();
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  int xValue = analogRead(A0);
  int yValue = analogRead(A1);

  int mappedX = map(xValue, 0, 1023, 0, 1023);//Swingarm Trim
  int mappedY = map(yValue, 0, 1023, 0, 1023);//Elevator Trim

  Joystick.setXAxis(mappedX);
  Joystick.setYAxis(mappedY);
  Joystick.sendState();
  delay(10);
}