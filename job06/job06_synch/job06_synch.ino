// Flash 2 LEDs synchronously
//

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
