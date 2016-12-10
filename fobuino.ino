int button = 5; //we are controlling the button via pin 5 on the Arduino UNO board
int presses = 2; //simple control variable to keep track of how many times we "press" the button
int wait = 750; //wait this many milliseconds. reset to 250 when done testing with DMM.

void pressButton() {
  digitalWrite(button, HIGH); //ratchet the voltage to 5V
  delay(wait); //sleep 750ms
  digitalWrite(button, LOW); //cut the voltage to 0V (really 0.5 or something)
  delay(wait); //sleep750ms
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
