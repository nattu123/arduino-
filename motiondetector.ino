
int motion;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(2,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  motion = digitalRead(2);
  Serial.println(motion);
  if(motion ==HIGH)
  {
    digitalWrite(11,LOW);
    delay(100);
  }
  else
  {
   digitalWrite(11,HIGH);  
  }
}
