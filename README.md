# ESP32 Non-Blocking Traffic Light

## Project Description

This project demonstrates a simple traffic light system using an ESP32.

The traffic lights are controlled using `millis()` instead of `delay()`. This makes the program non-blocking.

## Components

- ESP32
- Red LED
- Yellow LED
- Green LED
- 220Ω resistors
- Jumper wires
- Breadboard

## Pin Connections

| LED | ESP32 Pin |
|---|---|
| Red LED | GPIO 15 |
| Yellow LED | GPIO 4 |
| Green LED | GPIO 2 |

## Working

The traffic light works in the following sequence:

Red → Green → Yellow → Red

- Red: 5 seconds
- Green: 5 seconds
- Yellow: 2 seconds

## Non-Blocking Timing

The program uses `millis()` to keep track of time.

No `delay()` function is used in the main loop. Therefore, the ESP32 does not stop and wait while the timer is running.

## Why millis()?

`delay()` blocks the program and prevents other tasks from running normally.

`millis()` allows the program to check the elapsed time while the main loop continues running.

This makes the traffic light system non-blocking and suitable for embedded applications.

## Wiring Diagram

See `wiring_diagram.png` in this repository.

## Expected Result

The LEDs automatically change in this sequence:

Red → Green → Yellow → Red

with different timing intervals.

## Technologies Used

- ESP32
- Arduino IDE
- Embedded C/C++
- millis() non-blocking timing
