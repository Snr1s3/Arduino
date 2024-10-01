int p1 = A0;
int p2 = 9;
int potValue;
int ledBrightness;

void setup()
{
  pinMode(p2, OUTPUT);
}

void loop()
{
  potValue = analogRead(p1);
  ledBrightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(p2, ledBrightness);
  delay(10);
  
}