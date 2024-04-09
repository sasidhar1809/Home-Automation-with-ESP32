# Home-Automation-with-ESP32

This project provides a foundation for controlling LEDs on your ESP32 board using the Blynk IoT platform. You can easily customize it to manage various devices and functionalities within your smart home environment.

Features:

Connects to your Wi-Fi network for remote control.
Integrates with Blynk for a user-friendly mobile interface.
Controls eight (8) Relays connected to designated GPIO pins on the ESP32.
Implements a Blynk virtual write event to receive Relay control commands from the Blynk app.

Hardware Requirements:
ESP32 development board (any variant)
Eight (8) Relayss
Breadboard and connecting wires

Installation:

Download the Arduino IDE and install it.
Download the Blynk library and add it to your Arduino library manager:
In the Arduino IDE, go to Sketch > Include Library > Manage Libraries.
Search for "Blynk" and install the library by Blynk Inc.
Clone or download this repository to your computer.
Open the .ino file (e.g., home_automation.ino) in the Arduino IDE.
Configuration:

Replace the following placeholders in the code with your specific details:
ssid: Your Wi-Fi network name (SSID)
password: Your Wi-Fi network password
auth: Your Blynk authentication token (obtain from the Blynk app)
ledPins: Adjust the GPIO pin numbers to match your LED connections (if necessary)
Connect your Relays to the designated pins on the ESP32 board, ensuring appropriate resistor values for current limiting.
Usage:

Upload the code to your ESP32 board using the Arduino IDE.
Open the Blynk app on your smartphone or tablet.
Create a new project or open an existing one.
Select the template that matches your hardware setup (e.g., "Relay Control").
Use the Blynk app widgets to control the connected Relays.
