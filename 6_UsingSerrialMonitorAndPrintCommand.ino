//UNDERSTANDING THE SERIAL MONITOR AND PRINT
int J=1;
int wait=3000;
String myString="J =";

void setup() {
  // put your setup code here, to run once:
  //9600 IS THE BAUD RATE
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(myString);
  Serial.println(J);
  J=J+1;
  delay(wait);


}
