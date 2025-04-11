#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Normal begin statement for LCD requiring the number of columns and rows:
  lcd.begin(16, 2);
  
  // Print the message to the LCD:
  lcd.print("Hello World!");
}

void loop() {

}
