int travelTime,distance;
const  int TRG=7;
const int ECHO=6;
const int buzzer=9;

void setup() {
pinMode(ECHO,INPUT);
pinMode(TRG,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);

}

void loop() {
digitalWrite(TRG,LOW);
delayMicroseconds(3);
digitalWrite(TRG,HIGH);
delayMicroseconds(10);

travelTime=pulseIn(ECHO,HIGH);
distance=0.034*travelTime;
Serial.println(distance);

if (distance<10)
{digitalWrite(buzzer,HIGH);
}
else{ digitalWrite(buzzer,LOW);}
}
