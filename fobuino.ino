int power = 13;
int button = 12;
int presses = 2;
int wait = 5000; //wait this many milliseconds. reset to 250 when done testing with DMM.

void pressButton() {
  digitalWrite(button, HIGH);
  delay(wait);
  digitalWrite(button, LOW);
  delay(wait);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(power, OUTPUT);
  pinMode(button, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (presses > 0) {
    digitalWrite(power, HIGH);
    pressButton();
    presses--;
  } else {
    digitalWrite(power, LOW);
  }
}
