const int trigPin = 9;    // TRIG pin of HC-SR04
const int echoPin = 10;   // ECHO pin of HC-SR04
const int ledPin = 13;    // LED connected to digital pin 13
const int buzzerPin = 12; // Buzzer connected to digital pin 12

// Variables
long duration;
int distance;
int threshold = 20;       // Distance threshold in centimeters

void setup() {
  pinMode(trigPin, OUTPUT);    // Set the TRIG pin as an output
  pinMode(echoPin, INPUT);     // Set the ECHO pin as an input
  pinMode(ledPin, OUTPUT);     // Set the LED pin as an output
  pinMode(buzzerPin, OUTPUT);  // Set the buzzer pin as an output
  Serial.begin(9600);          // Initialize serial communication for debugging
}

void loop() {
  // Clear the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the TRIG pin HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the ECHO pin
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance
  distance = duration * 0.034 / 2;

  // Print the distance to the serial monitor (for debugging purposes)
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is less than the threshold
  if (distance < threshold) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    digitalWrite(buzzerPin, HIGH); // Sound the buzzer
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
    digitalWrite(buzzerPin, LOW); // Turn off the buzzer
  }

  delay(100); // Short delay before next reading
}
