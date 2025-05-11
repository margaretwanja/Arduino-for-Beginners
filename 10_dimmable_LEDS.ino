//DIMMABLE LED PROJECT
int wait=3000;
float potVal;
int redPin=9;
int potPin=A2;
float LedVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(redPin,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  LedVal=(255./1023.)*potVal;
  Serial.print(" The voltage at this point is ");
  analogWrite(redPin,LedVal);
  Serial.println(LedVal);
  delay(wait);

}
