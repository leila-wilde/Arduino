// Program to flash 8 LEDs in turn

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  for (int pin = 13; pin >= 6; pin--) {
    digitalWrite(pin, HIGH); // Turn on the current LED
    delay(500); // Wait for 500 milliseconds
    digitalWrite(pin, LOW); // Turn off the current LED
  }
}
