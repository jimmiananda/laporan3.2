void setup()
{
  DDRB=0b1111;
  DDRC=0b0000;
  PORTC=0b1111;
}
void loop()
{
  if (digitalRead(A0)==LOW)
  {
  first();
  delay(1000);
  }
  if(digitalRead(A1)==LOW)
  {
    second();
    delay(1000);
  }
  if(digitalRead(A2)==LOW)
  {
    reset();
  }
}

void first()
{
  for(int LED=8; LED<12; LED++)
    { 
      digitalWrite(LED,HIGH);
      delay(100);
      digitalWrite(LED,LOW);
      delay(100);}
}
void second()
{
  for(int LED=11; LED>8; LED--)
    { digitalWrite(LED,HIGH);
      delay(100);
      digitalWrite(LED,LOW);
      delay(100);}
}
void reset()
{
  PORTB = 0;
}



  
