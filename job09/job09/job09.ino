/* toggle LED on and off */

// constant variables:
const int BUTTON_PIN = 7; 
const int LED_PIN    = 3; 

// variables that will change:
int ledState = LOW; // the current state of LED
int lastButtonState; // the previous state of button
int currentButtonState; // the current state of button

void setup() {
  Serial.begin(9600); // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode

  currentButtonState = digitalRead(BUTTON_PIN);
}

void loop() {
  lastButtonState = currentButtonState; // save the last state
  currentButtonState = digitalRead(BUTTON_PIN); // read new state

  if(lastButtonState == HIGH && currentButtonState == LOW) {
    Serial.println("button pressed");

    // toggle state of LED
    ledState = !ledState;

    // control LED arccoding to the toggled state
    digitalWrite(LED_PIN, ledState); 
  }
}
