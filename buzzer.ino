int i,j,k;
void setup()
{Serial.begin(115200);
pinMode(3,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(13,OUTPUT);
}
void loop(){
  if(digitalRead(3)==LOW)
  {
    i=1;
    Serial.println(i);
    tone(13,3000,500);
  }
  else if(digitalRead(5)==LOW)
  {
    j=2;
    Serial.println(j);
    tone(13,5000,500);
  }
  else if(digitalRead(7)==LOW)
  {
    k=3;
    Serial.println(k);
    tone(13,10000,500);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
