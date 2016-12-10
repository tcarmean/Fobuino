int button = 5;
int presses = 2;
int wait = 750; //wait this many milliseconds. reset to 250 when done testing with DMM.

void pressButton() {
  digitalWrite(button, HIGH);
  delay(wait);
  digitalWrite(button, LOW);
  delay(wait);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(button, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (presses > 0) {
    pressButton();
    presses--;
  }
}
