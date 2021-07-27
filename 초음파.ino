int trig =5;
int echo =6;
void setup() {
Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  float duration,distance;
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
duration = pulseIn(echo, HIGH);
distance =(float)(340 * duration / 10000)/2;
Serial.print(distance);
Serial.println("cm");
delay(500);
}
