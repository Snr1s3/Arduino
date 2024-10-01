int p1 = 11;
int p2 = 10;

void setup()
{
  pinMode(p1, INPUT);
  pinMode(p2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(p1) == HIGH)
  {
    digitalWrite(p2, HIGH);
  }
  else
  {
    digitalWrite(p2, LOW);
  }
  delay(100);
}