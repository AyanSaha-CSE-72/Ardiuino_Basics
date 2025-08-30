const int trig = 12;
const int echo = 13;
int led = 10;
int buzzer = 7;
int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)/29.1;

  Serial.println(distance);

  if (distance<10){
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,LOW);
  }else{
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
  }

  if(distance<40){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}
