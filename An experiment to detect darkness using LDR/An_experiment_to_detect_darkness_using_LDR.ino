const int ldrPin = A0;     // LDR connected to analog pin A0
const int ledPin = 13;     // LED connected to digital pin 13

// Variables
int ldrValue = 0;          // Variable to store the value read from the LDR
int threshold = 500;       // Threshold value to detect darkness

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600);      // Initialize serial communication for debugging
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read the analog value from the LDR
  
  // Print the LDR value to the serial monitor (for debugging purposes)
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // If the LDR value is below the threshold, turn on the LED
  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }
  
  delay(100); // Short delay before next reading
}
