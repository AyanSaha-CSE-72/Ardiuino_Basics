const int irSensorPin = 2;  // IR sensor output pin connected to digital pin 2
const int ledPin = 13;      // LED connected to digital pin 13
const int buzzerPin = 12;   // Buzzer connected to digital pin 12

// Variables
int irSensorState = LOW;    // Variable to store the IR sensor state

void setup() {
  pinMode(irSensorPin, INPUT);  // Set the IR sensor pin as an input
  pinMode(ledPin, OUTPUT);      // Set the LED pin as an output
  pinMode(buzzerPin, OUTPUT);   // Set the buzzer pin as an output
  Serial.begin(9600);           // Initialize serial communication for debugging
}

void loop() {
  irSensorState = digitalRead(irSensorPin); // Read the state of the IR sensor
  
  // Print the IR sensor state to the serial monitor (for debugging purposes)
  Serial.print("IR Sensor State: ");
  Serial.println(irSensorState);

  // If an obstacle is detected, turn on the LED and buzzer
  if (irSensorState == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    digitalWrite(buzzerPin, HIGH); // Activate the buzzer
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
    digitalWrite(buzzerPin, LOW); // Deactivate the buzzer
  }

  delay(100); // Short delay before next reading
}
