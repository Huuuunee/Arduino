//돌려서 밝기 바꾸기
void setup(){
  Serial.begin(9600);
  }
void loop(){
  int vr = analogRead(A0);
  Serial.println(vr);
  int led = map(vr,0,1023,0,255);
  analogWrite(9,led);
  delay(50);
}
