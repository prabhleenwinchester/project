#include <HX711.h>

HX711 scale2;

const int weightThreshold = 50; // Set your desired weight threshold in grams

void setup() {
  Serial.begin(9600);
  scale2.begin(4, 5); // Define your DOUT and SCK pins for Sensor 2
}

void loop() {
  if (scale2.is_ready()) {
    scale2.set_scale();
    long weight = scale2.get_units(10); // Read the weight value

    if (weight < weightThreshold) {
      // Add code to send an SMS notification using your GSM module here
    }

    Serial.print("Weight: ");
    Serial.println(weight);
  } else {
    Serial.println("Error: Unable to detect a HX711.");
  }
}

