#define pot A0
int leds[] = {2,3,4,5,6,7};

void setup() {
  for(int i=0; i<6; i++){
   pinMode(leds[i],OUTPUT); 
  }
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(pot)/20; 
  for(int i=1; i<6; i++){
    digitalWrite(leds[i],HIGH);
    delay(value);
    digitalWrite(leds[i],LOW);
  }
  for(int j=5; j>-1; j--){
    digitalWrite(leds[j],HIGH);
    delay(value);
    digitalWrite(leds[j],LOW);
  }
}
