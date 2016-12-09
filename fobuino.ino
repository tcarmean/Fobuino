int power = 13;
int button = 12;
int presses = 2;

void pressButton() {
  digitalWrite(button, HIGH);
  delay(250);
  digitalWrite(button, LOW);
  delay(250);
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
