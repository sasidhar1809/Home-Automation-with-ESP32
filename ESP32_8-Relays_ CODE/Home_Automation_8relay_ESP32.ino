#include <WiFi.h>

// Replace with your WiFi credentials
const char* ssid = "your_wifi_network_name";
const char* password = "your_wifi_password";

// Define the pins for the LEDs
const int numLEDs = 8;
const int ledPins[numLEDs] = {2, 4, 5, 18, 19, 21, 22, 23}; // Example GPIO pins for ESP32

void setup() {
  // Set the LED pins as outputs
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn each LED on and off in sequence
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on LED
    delay(200); // Wait for 200 milliseconds
    digitalWrite(ledPins[i], LOW); // Turn off LED
  }
}
