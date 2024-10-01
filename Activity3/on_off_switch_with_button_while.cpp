int p1 = 11;
int p2 = 10;
int t_on = 1;

void setup()
{
  pinMode(p1, INPUT);
  pinMode(p2, OUTPUT);
}

void loop()
{
  while(t_on != 0)
  {
    if(digitalRead(p1) == HIGH)
    {
      t_on = t_on * -1;
    }
    if(t_on < 0)
    {
     digitalWrite(p2, HIGH); 
    }
    else
    {
     digitalWrite(p2, LOW); 
    }
    delay(100);
  }
}