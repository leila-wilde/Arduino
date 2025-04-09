// Program that gradually changes an LED's brightness.

void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(3, i); // increase brightness in loop
    delay(10); // Wait for 10 milliseconds
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(3, i); // decrease brightness in loop
    delay(10); // Wait for 10 milliseconds
  }
}
