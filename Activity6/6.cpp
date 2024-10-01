int leds[] = {9,10,11,12,13};
int btn = 6;
int bz = 7;
int n = 0;
int time = 200;

void setup()
{
    for(n = 0; n < 5; n++)
    {
        pinMode(leds[n], OUTPUT);
    }
    pinMode(bz, OUTPUT);
    pinMode(btn, INPUT);
}
void tried()
{
  if(digitalRead(btn)==HIGH && n==2)
  {
    digitalWrite(bz,HIGH);
    delay(1000);
    digitalWrite(bz,LOW);
    time=time-20;
    if(time<10)
    {
      time=200;
    }
  }
}
void loop()
{
    for(n = 0; n < 5; n++)
    {
        digitalWrite(leds[n],HIGH);
        delay(time);
        tried();
        digitalWrite(leds[n],LOW);
        delay(time);
    }
}