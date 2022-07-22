#define potpin A0 
int value = 0; 

void setup() {
  Serial.begin(9600);
  Serial.println("Reading value with potentiometer");
}

void loop() {
  value = analogRead(potpin); 
  Serial.println(value); 
  delay(100); 
}
