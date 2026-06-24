# HC-SR04 Distance Controlled LED

A beginner Arduino project that uses an HC-SR04 ultrasonic sensor to control LED brightness based on distance.

The closer an object is to the sensor, the brighter the LED becomes.

## Components

* Arduino Uno
* HC-SR04 ultrasonic sensor
* LED
* 220Ω resistor
* Breadboard
* Jumper wires

## Wiring

| Component | Arduino Pin |
| --------- | ----------- |
| Trig      | D9          |
| Echo      | D10         |
| LED       | D3          |
| VCC       | 5V          |
| GND       | GND         |

## Code

The Arduino sketch is located in:

```text
code/distance_led.ino
```

## Images

![Project setup](images/setup.jpg)

![Wiring diagram](images/wiring.jpg)
