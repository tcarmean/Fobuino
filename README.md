# Fobuino

## What is it?
Fobuino is an Arduino based hardware/software hack to program the remote start feature on my 2016 Ford Transit Connect.

## What are the dependencies?
Fobuino uses the [Timer](https://github.com/JChristensen/Timer) Library by [Jack Christensen](https://github.com/JChristensen). You can follow the [Installing Additional Arduino Libraries Guide](https://www.arduino.cc/en/Guide/Libraries) to load the library into the Arduino IDE.

## Why are you doing this?
My wife and I are getting into the whole *vanlife* thing. Over the past 3 months we have been painstakenly converting our 2016 Ford Transit Connect Long Wheelbase Cargo Van into a skiing and biking road trip vehicle. Our first trip is quickly approaching. We are skiing in Banff National Park (Sunshine Village and Lake Louise resorts are both just outside of the town of Banff). We recently learned that the temperatures in that area were getting down to -40C overnight. In addition to installing a first class electrical system in the van to run things like our refrigerator and heated blankets, we're going to need to take advantage of the van's heating system as well (because -40 is COLD). Being the environmentally conscious millenials we are, we don't want to just idle the engine all night. It would be better if we could start and stop the van on a timer to run heater every couple of hours. The side benefit is that -40 is REALLY bad for the motor if you have to cold start it. If you can start the motor while the oil and coolant are somewhat warm, you lessen the risk of serious engine damage.

## How did you hack the hardware?
I disassembled one of the remote start keyfobs that came with the van. The Owner's Manual that Ford shipped with the keyfob says I have the 1-Way Transmitter. The transmitter operates on the principle that pressing the button closes a simple circuit. We wired the 3.3V power rail from the Arduino into one side of the circuit and used a resistor/transistor combo to simulate pressing the button. The transistor is activated by using the `digitalWrite` function that ships with the Arduino. It's really quite simple.

## Can I follow your adventures?
[Instagram](https://www.instagram.com/van_going/)

[Ford Transit Connect Forum (userid: chong)](http://fordtransitconnectforum.com)

