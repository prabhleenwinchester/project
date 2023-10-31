project
Smart pet food dispenser
Pet Food Dispenser with Remote Monitoring

#Overview

The aim of this project is to make a smart pet food dispenser using Arduino and Raspberry Pi. The system uses scale body sensors to check the food levels in the food bowl and dispenser. When the food levels drop below 10gms in the bowl the LED light turns on and when the food levels drop below 50gms in the dispenser an SMS notification is sent to the phone.

#Features

- Indication using LED when the food levels are low in the Bowl.
- Real-time notifications using SMS.
- saving food levels in the S3 bucket
- Thresholds can be changed.
- controlled using SSH.

#Components

- Arduino or Teensy2.0 
- HX711 Load Cell Amplifier
- Weight sensors for pet bowl and dispenser
- Raspberry Pi (for remote monitoring and notifications)
- GSM module (for SMS notifications)
- AWS EC2 instance and S3 bucket (for data storage)
- Twilio API (for SMS notifications)
- Other necessary electronic components (LEDs, resistors, wires)

#Setup Instructions

1. Connect the weight sensors (HX711) to Teensy 2.0.
2. Add the Arduino code for reading sensor data to Raspberry Pi.
3. Configure your Raspberry Pi to enable SSH and install the necessary software.
4. Write the Python code for the GSM module on Raspberry Pi.
5. Start the system and ensure it's working.

