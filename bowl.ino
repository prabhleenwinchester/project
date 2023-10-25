#include <HX711.h>

HX711 scale1;

const int ledPin = 13; // LED connected to digital pin 13
const int weightThreshold = 10; // Set your desired weight threshold in grams

void setup() {
  Serial.begin(9600);
  scale1.begin(2, 3); // Define your DOUT and SCK pins
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (scale1.is_ready()) {
    scale1.set_scale();
    long weight = scale1.get_units(10); // Read the weight value

    if (weight < weightThreshold) {
      digitalWrite(ledPin, HIGH); // Turn on the LED when weight is below the threshold
    } else {
      digitalWrite(ledPin, LOW); // Turn off the LED
    }

    Serial.print("Weight: ");
    Serial.println(weight);
  } else {
    Serial.println("Error: Unable to detect a HX711.");
  }
}

