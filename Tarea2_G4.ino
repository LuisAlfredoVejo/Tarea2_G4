int pot = A0;
int valorPot;
int motor =11;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  /*Serial.begin(9600);
  while(!Serial);
  Serial.println("Velocidad de 0 a 255");
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  
  vel();
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(50);
  
  if(digitalRead(2) == HIGH){
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
  }
  if(digitalRead(3 == HIGH)){
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);    
  }

  /*if(Serial.available()){
    int velocidad = Serial.parseInt();
    if(velocidad >=0 && velocidad <= 255){
      analogWrite(motorPin,velocidad);      
    }
  }
  */
}

void vel(){
  valorPot = analogRead(pot);
  analogWrite(motor, valorPot);
}




  
