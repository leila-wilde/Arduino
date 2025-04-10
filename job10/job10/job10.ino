const int analog_ip = A0;
const int LED_RED = 11;
const int LED_GREEN = 10;

int  inputVal = 0;

void setup() {
  pinMode (LED_RED, OUTPUT);
  pinMode (LED_GREEN,  OUTPUT);
}

void loop() {
  inputVal = analogRead(analog_ip);
  analogWrite  (LED_RED, inputVal/4);
  analogWrite (LED_GREEN, (1023-inputVal)/4);
}
