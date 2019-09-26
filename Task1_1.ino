void setup() {
  pinMode(2, OUTPUT);//red
  pinMode(3, OUTPUT);//yellow
  pinMode(4, OUTPUT);//green
  pinMode(5, INPUT);//button 


}

void loop() {
  int button = digitalRead(5);
  if (button == HIGH){
   digitalWrite(4,LOW);
    delay (1000);
   digitalWrite(2,HIGH);
   delay (1000);
   digitalWrite(2,LOW);
   delay (1000);
   digitalWrite(3,HIGH);
   delay (1000);
   digitalWrite(3,LOW);
   delay (1000);
   digitalWrite(4,HIGH);
   delay (1000);
   digitalWrite(4,LOW);
   delay (1000);
  }
  else{
    digitalWrite(4,HIGH);
  }
}
