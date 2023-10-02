//Wire up a push button and program it to function

#define buttonPin 32 //This can be any pin that you want

void setup() {
  Serial.begin(9600); //Interfaces with a monitor on the ardunio IDE for debug output
  pinMode(buttonPin, INPUT_PULLUP); //Set the button's pin to register as output
}

int buttonState = 0; //Checks the current status on the button

/*
  A key concept to understand is the idea of HIGH and LOW
  For the button, LOW means that it's being pressed, and HIGH means it's not being pressed.
  Do with this information what you will as far as coding stuff is concerned.
*/

void loop() {
  buttonState = digitalRead(buttonPin); //Get current status of the pin
  if (buttonState == LOW) //Is the button being pressed?
  {
    Serial.println("You pressed the button, now go do something useful with it"); //Write this to the serial monitor
  }
}
