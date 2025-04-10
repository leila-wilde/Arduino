const int POTENTIOMETER = A0;
const int LED_RED = 11;
const int LED_GREEN = 10;

int reading = 0; // store potentiometer reading

void setup() {
  
  pinMode (LED_RED, OUTPUT);
  pinMode (LED_GREEN,  OUTPUT);
  
}

void loop() {
  
  reading = analogRead(POTENTIOMETER); // read value from potentiometer
  /* potentiometer reading must be divided by 4
  to scale it down from a range of 0-1023 to 0-255,
  the range used by analogWrite() */
  analogWrite(LED_RED, reading/4); // set brightness of red LED
  analogWrite(LED_GREEN, (1023-reading)/4); // set the brightness of green LED

}
