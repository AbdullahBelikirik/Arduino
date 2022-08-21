const int pingpin = 10;

void setup(){
Serial.begin(9600);  
pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
 
}

void loop(){
  long duration,cm;
  pinMode(pingpin,OUTPUT);
  digitalWrite(pingpin,LOW);
  delayMicroseconds(2);
  digitalWrite(pingpin,HIGH);
  delayMicroseconds(5);
  digitalWrite(pingpin,LOW);
  pinMode(pingpin,INPUT);
  duration = pulseIn(pingpin,HIGH);
  cm= microsecondsToCentimeters(duration);
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
 
  if(cm <30){
    digitalWrite(9,HIGH);
  }else{
    digitalWrite(9,LOW);
   
  }
 
  if(cm <60){
    digitalWrite(8,HIGH);
  }else{
    digitalWrite(8,LOW);
     
       }
  if (cm <90){
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
   
  }
 
  if (cm <120){
    digitalWrite(6,HIGH);
  }else{
    digitalWrite(6,LOW);
   
  }
 
  if (cm <150){
    digitalWrite(5,HIGH);
  }else{
    digitalWrite(5,LOW);
   
  }
 
  if(cm <180){
    digitalWrite(4,HIGH);
  }else{
    digitalWrite(4,LOW);
   
   
  }
  if (cm < 210) {
    digitalWrite(3,HIGH);
    }else{
    digitalWrite(3,LOW);
  }
  if (cm < 240){
digitalWrite(2,HIGH);
  }else{
  digitalWrite(2,LOW);
 
}

  if (cm < 270){
digitalWrite(1,HIGH);
} else {
  digitalWrite(1,LOW);
}

tone(12,400-cm);
delay(cm);
noTone(12);
delay(cm);
}

long microsecondsToCentimeters(long microseconds){
  return microseconds / 29 / 2 ;
}
