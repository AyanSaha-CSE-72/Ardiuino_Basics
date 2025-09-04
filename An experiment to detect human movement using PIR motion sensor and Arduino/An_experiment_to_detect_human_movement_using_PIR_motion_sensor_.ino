const int pirPin = 2;     // PIR motion sensor output pin connected to digital pin 2
const int ledPin = 13;    // LED connected to digital pin 13

// Variables
int pirState = LOW;       // Variable to store the PIR sensor state

void setup() {
  pinMode(pirPin, INPUT);  // Set the PIR pin as an input
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600);      // Initialize serial communication for debugging
}

void loop() {
  pirState = digitalRead(pirPin); // Read the state of the PIR sensor
  
  // Print the PIR state to the serial monitor (for debugging purposes)
  Serial.print("PIR State: ");
  Serial.println(pirState);

  // If motion is detected, turn on the LED
  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }

  delay(100); // Short delay before next reading
}
