#include <Servo.h>

Servo servo;
int p2 = 9;

void setup()
{
  servo.attach(p2);
}

void loop()
{
  for (int angle = 0; angle <= 180; angle++) {
    servo.write(angle); 
    delay(10); 
  }

  for (int angle = 180; angle >= 0; angle--) {
    servo.write(angle); 
    delay(10);
  }
}