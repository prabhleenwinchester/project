#include "HX711.h"

HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(1, 2);  // Parameters: (DT pin, SCK pin)
}

void loop() {
  if (scale.is_ready()) {
    Serial.println("Sensor is connected.");
    long weight = scale.get_units(10);
    Serial.print("Weight: ");
    Serial.print(weight);
    Serial.println(" grams");
  } else {
    Serial.println("Sensor not found. Check your connections.");
  }
  delay(1000);
}

