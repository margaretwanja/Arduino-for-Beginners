//IF STATEMENTS IN ARDUINO
//ADDITIONAL LED ADDED TO THE POTETIOMETER CIRCUIT FROM EARLIER


int readPin=A2;
int ledPin=9;
int wait=3000;
float readVal;
float V2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readPin,INPUT);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 readVal=analogRead(readPin);
 V2=(5./1023.)*readVal;
 Serial.print(" Potetiometer Voltage is ");
Serial.println(V2);
if(V2>4.0){
  digitalWrite(ledPin,HIGH);
}
 //THE LED SHOULD TURN ON WHEN THE VOLTAGE EXCEEDS 4.
 //THIS IS AN EXAMPLE OF HOW TO USE THE IF STATEMENT IN ARDUINO.
 
if(V2<4.0){
  digitalWrite(ledPin,LOW);
}
delay(wait);
}