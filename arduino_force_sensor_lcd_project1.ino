#include <LiquidCrystal_I2C.h>
 LiquidCrystal_I2C lcd(39,16,2);
# define Force A0
int Reading=0;

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.print("Loading Force...");
  delay(1000);
  lcd.clear();
}

void loop()
{
Reading=analogRead(Force);
  lcd.setCursor(0,0);
  lcd.print("Reading = ");
   lcd.setCursor(11,0);
  lcd.print(Reading);
  lcd.print("     ");
}