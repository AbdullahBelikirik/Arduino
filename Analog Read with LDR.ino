#define Led 3 
#define LDR A0

void setup() {
  pinMode(Led, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(LDR); 
  Serial.println(light); 
  delay(50);
  if (light > 900) { 
    digitalWrite(Led, LOW); 
  }
  if (light < 850) { 
    digitalWrite(Led, HIGH); 
  }
}
