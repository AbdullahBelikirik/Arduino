#include <Adafruit_LiquidCrystal.h>
#define echo 9
#define trig 10

int distance;
int counter = 0;

int measure(){
  int distance;
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  
  distance = pulseIn(echo,HIGH)/ 58.2;
  delay(50);
  return distance;
}

Adafruit_LiquidCrystal lcd(0);
void setup()
{
  lcd.begin(16, 2);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  lcd.setCursor(0, 0);
  lcd.print("Person number");
  lcd.setCursor(0,1);
  lcd.print("inside = 0");
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.setBacklight(1);
  distance = measure();
  if(distance<70){
  	counter++;
  }
  lcd.print("Person number");
  lcd.setCursor(0,1);
  lcd.print("inside = ");
  lcd.print(counter);
  delay(50);
}
