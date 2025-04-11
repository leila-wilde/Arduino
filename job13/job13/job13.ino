#include <LiquidCrystal.h>

// associate LCD interface pin with connected Arduino pin number:
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define a custom character for a smiley face:
byte smile[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b10001,
  0b01110,
  0b00000,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  
  // Create the custom character
  lcd.createChar(0, smile);
  
  // Print the message to the LCD:
  lcd.setCursor(0,0);
  lcd.print("smile");
  lcd.setCursor(2, 1); 
  lcd.write(byte(0)); // Display the smiley face
  lcd.write(byte(0)); // Display the smiley face
  lcd.write(byte(0)); // Display the smiley face
}

void loop() {
  
}
