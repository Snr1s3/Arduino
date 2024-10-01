#include <Servo.h>

Servo servo;
int servoPin = 9;
int pinRed = 10;
int pinGreen = 11;
int potPin = A0;
int oldangle = 0;

void setup()
{
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  int potValue = analogRead(potPin); 
  int angle = map(potValue, 0, 1023, 0, 300);
  servo.write(angle);
  if(angle > oldangle)
  {
    digitalWrite(pinRed, LOW);
    digitalWrite(pinGreen, HIGH);
  }
  else  if(angle < oldangle)
  {
    digitalWrite(pinGreen, LOW);
    digitalWrite(pinRed, HIGH);
  }
  else
  {
    digitalWrite(pinGreen, LOW);
    digitalWrite(pinRed, LOW);
  }
  oldangle = map(potValue, 0, 1023, 0, 300);
  delay(15); 
}