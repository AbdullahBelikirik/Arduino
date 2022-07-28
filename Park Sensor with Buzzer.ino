#define echo 6
#define trig 7
#define buzzer 8

int measure(){
  int duration, distance;
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  
  duration = pulseIn(echo,HIGH);
  distance = duration/58.2;
  delay(50);
  if(distance>0){
    return distance;
  }
}

int melody(int dly){
  tone(buzzer,440);  
  delay(dly);
  noTone(buzzer);
  delay(dly);
}

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
