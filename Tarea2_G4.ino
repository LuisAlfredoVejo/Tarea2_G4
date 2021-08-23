void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  if(digitalRead(2) == HIGH){
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
  }
  if(digitalRead(3 == HIGH)){
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);    
  }
}


  
