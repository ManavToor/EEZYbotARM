#include <Servo.h>

const int potPins[] = {A3, A0, A2, A1};
const int servoPins[] = {2, 3, 4, 5};

int val;

Servo myServo[4];


void setup() {
  for (int i = 0; i <= 3; i++) {
    myServo[i].attach(servoPins[i]);
  }
}

void loop() {
  for (int i = 0; i <= 3; i++) {
      val = analogRead(potPins[i]);
      val = map(val, 0, 1023, 0, 180);
      myServo[i].write(val);
    }
}
