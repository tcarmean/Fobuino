int button = 5;
int presses = 2;
int volts = 165; //a value between 0 and 255 where 0 is 0 volts and 255 is 5 volts
int wait = 5000; //wait this many milliseconds. reset to 250 when done testing with DMM.

void pressButton() {
  analogWrite(button, volts);
  delay(wait);
  analogWrite(button, LOW);
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
