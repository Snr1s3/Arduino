#include <Servo.h>

Servo servo;
int servoPin = 9;
int potPin = A0; 

void setup()
{
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  int potValue = analogRead(potPin); 
  int angle = map(potValue, 0, 1023, 0, 280);
  servo.write(angle); 
  delay(15); 
}