void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  delay(500);


}
