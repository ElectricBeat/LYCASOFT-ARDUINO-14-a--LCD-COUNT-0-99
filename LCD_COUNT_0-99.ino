#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int count=0;
void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Welcome to SEES ");
}

void loop() 
{ 
  lcd.setCursor(0,1);
  lcd.print("Count:");
  lcd.setCursor(6,1); 
  lcd.print(count);
  count++;
  delay(1000);
  
  if(count>99)
  {
     count=0;
  }
}
