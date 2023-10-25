# project
assessment project smart pet food dispenser using arduino, rapaspberry pi 
# Pet Food Dispenser with Remote Monitoring

## Overview

This project aims to create an automated pet food dispenser system with remote monitoring capabilities. The system uses weight sensors to monitor the food levels in both the pet bowl and the dispenser. When the food levels go below a certain threshold, the system sends notifications to the pet owner via SMS. The project combines an Arduino-based hardware setup with a Raspberry Pi for remote monitoring and control.

## Features

- Automatic pet food dispensing based on food levels.
- Real-time monitoring and notifications via SMS.
- Integration with Amazon Web Services (AWS) for data storage and analysis.
- Customizable food level thresholds.
- Remote control using the Raspberry Pi and SSH.

## Components

- Arduino or Teensy (for sensor reading and control)
- HX711 Load Cell Amplifier
- Weight sensors for pet bowl and dispenser
- Raspberry Pi (for remote monitoring and notifications)
- GSM module (for SMS notifications)
- AWS EC2 instance and S3 bucket (for data storage)
- Twilio API (for SMS notifications)
- Other necessary electronic components (LEDs, resistors, wires)

## Setup Instructions

1. Connect the weight sensors (HX711) to your Arduino or Teensy.
2. Upload the Arduino code for reading sensor data to your microcontroller.
3. Configure your Raspberry Pi to enable SSH and install the necessary software.
4. Upload the Python script for remote monitoring and SMS notifications to your Raspberry Pi.
5. Make the necessary connections and power arrangements.
6. Start the system and ensure it's working as expected.

## Usage

1. Power on the system.
2. Ensure the sensors are correctly calibrated.
3. Monitor food levels remotely using your Raspberry Pi.
4. Receive SMS notifications when food levels are low.

## Folder Structure

- `/Arduino`: Contains Arduino code for sensor reading and control.
- `/RaspberryPi`: Contains Python code for remote monitoring and SMS notifications.
- `/Documentation`: Includes circuit diagrams, setup instructions, and system overview.


