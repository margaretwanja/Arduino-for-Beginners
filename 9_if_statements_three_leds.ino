//IF STATEMENTS USING THREE LEDS :
//RED IS ON WHEN VOLTAGE IS ABOVE 4V
//GREEN IS ON WHEN VOLTAGE IS UNDER 3V
//YELLOW IS ON WHEN VOLTAGE IS BETWEEN 3 AND 4 VOLTS
int readPin=A3;
int redpin=2;
int yellowpin=3;
int greenpin=4;
float readVal;
float V2;
int wait=3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(redpin,OUTPUT);
  pinMode(yellowpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(readPin);
V2=(5./1023.)*readVal;
Serial.print(" The voltage is ");
Serial.println(V2);
if(V2>4.0){
  digitalWrite(redpin,HIGH);

}
if (V2<4.0){
  digitalWrite(redpin,LOW);
}
if (V2>=3 && V2<=4){
  digitalWrite(yellowpin,HIGH);
}
if (V2<3){
  digitalWrite(yellowpin,LOW);
}
if (V2>4.0){
  digitalWrite(yellowpin,LOW);
}
if (V2<3.0){
  digitalWrite(greenpin,HIGH);
}
 if (V2>3.0){
  digitalWrite(greenpin,LOW);
 }

delay(wait);
}