# Traffic Light Simulator

This project implements a simple traffic light simulator using an AVR microcontroller (ATMEGA32). The system displays a countdown for each traffic light state on two seven-segment displays and controls the traffic light LEDs.

## Hardware Requirements

- ATMEGA32 microcontroller
- Two 7-segment displays (common cathode)
- Three LEDs (Red, Yellow, Green)
- Appropriate resistors and connections

## Functionality

The system cycles through the following states:

1. Green light: 30-second countdown
2. Yellow light: 5-second countdown
3. Red light: 30-second countdown

The current state is indicated by lighting the corresponding LED, while the countdown is displayed on the 7-segment displays.

## Pin Connections

- PORTA: Connected to the first 7-segment display
- PORTB: Connected to the second 7-segment display
- PORTD:
  - PD1: Green LED
  - PD2: Yellow LED
  - PD3: Red LED

## Code Overview

The main functions of the code are:

1. `sseg` array: Defines the bit patterns for displaying digits 0-9 on a 7-segment display.
2. `count` function: Implements the countdown logic for each state.
3. Main loop: Cycles through the traffic light states, calling the `count` function for each state.

## Setup and Compilation

To compile and run this code:

1. Ensure you have the AVR-GCC toolchain installed.
2. Set up your project with the appropriate makefile or IDE settings.
3. Compile the code and flash it to your ATMEGA32 microcontroller.

## Future Improvements

- Add pedestrian crossing button functionality
- Implement adjustable timings for different traffic conditions
- Add error handling for potential hardware issues
