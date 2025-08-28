int led = 10;
int button = 12;
void setup() {
  pinMode (led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if(digitalRead(button) == HIGH){
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }else{
    digitalWrite(led,LOW);
  }
}
