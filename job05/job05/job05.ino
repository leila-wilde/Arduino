// C++ code
// Flashing LED
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 100 millisecond(s)
}
