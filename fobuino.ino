#include <Event.h>
#include <Timer.h>

Timer t;
int button = 5; //we are controlling the button via pin 5 on the Arduino UNO board
int presses = 2; //simple control variable to keep track of how many times we "press" the button
int wait = 750; //simulate holding the button down for this many milliseconds to simulate a press and hold
unsigned long int period = 60000; //60000ms = 1min

void startCar(void *context) {
  //press the button twice to start the car
  for (int i=presses; i>0; i--) {
    digitalWrite(button, HIGH); //ratchet the voltage to 5V
    delay(wait); //sleep 750ms
    digitalWrite(button, LOW); //cut the voltage to 0V (really 0.5 or something)
    delay(wait); //sleep750ms
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(button, OUTPUT);
  digitalWrite(button, LOW);
  t.every(period * 60, startCar, (void *)0);
}

void loop() {
  // put your main code here, to run repeatedly:
  t.update();
}
