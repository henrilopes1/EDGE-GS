
#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

double sensorValue=0;
double pesoMaximo = 180;
double prescisao = 0.1;

void setup() 
{
  Serial.begin(9600);
  lcd.begin(16,2);  
  pinMode(A0, INPUT);
}
void loop() 
{ 
  lcd.clear();
  sensorValue = analogRead(A0);    
  double result = conversao(sensorValue);
  lcd.print(result);
  delay(500);
}
double conversao(double sensorValue)
{
  return sensorValue * pesoMaximo / 1023.0;
  
}
 
