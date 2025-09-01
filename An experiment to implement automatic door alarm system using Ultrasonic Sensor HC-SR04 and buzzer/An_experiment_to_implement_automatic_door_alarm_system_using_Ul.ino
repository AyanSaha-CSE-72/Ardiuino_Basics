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
