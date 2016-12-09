int voltage = 153; //153 is 66% of 255. This should equal ~3V
int buttonPin = 5; //this is the pin that the button on the remote is attached to
int presses = 2;

void pressButton() {
  if (presses > 0) {
    analogWrite(buttonPin, voltage);
    presses--;
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  pressButton();
}
