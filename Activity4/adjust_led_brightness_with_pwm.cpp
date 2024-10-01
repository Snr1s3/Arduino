int p2 = 9;

void setup()
{
  pinMode(p2, OUTPUT);
}

void loop()
{
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(p2, brightness); 
    delay(10); 
  }

  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(p2, brightness); 
    delay(10);
  }
}