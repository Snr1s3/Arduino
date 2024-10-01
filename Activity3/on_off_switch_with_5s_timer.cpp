int p1 = 11;
int p2 = 10;

void setup()
{
  pinMode(p1, INPUT);
  pinMode(p2, OUTPUT);
}

void loop()
{
  if(digitalRead(p1) == HIGH)
  {
    digitalWrite(p2, HIGH);
    delay(5000);
    digitalWrite(p2, LOW); 
  }
}