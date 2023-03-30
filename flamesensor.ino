
int val=0;
void setup() {
  // put your setup code here, to run once:
 
pinMode(13,OUTPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(4);
  Serial.println(val);
  if(val==1)
  {
   digitalWrite(13,LOW);
  }
  else
  {
   digitalWrite(13,HIGH);
   }
  
}
