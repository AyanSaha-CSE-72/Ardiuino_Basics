// gas lighter detector 
int led = 7;
int sensor= A0;
int sensorThresh = 400;

void setup() {
pinMode(led,OUTPUT);
pinMode(sensor ,INPUT);
Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(sensor);
  Serial.println(analogValue);

  if(analogValue > sensorThresh ){
  digitalWrite(led, HIGH);
  delay(700);
 }

else {
  digitalWrite(led, LOW);
  }

}
