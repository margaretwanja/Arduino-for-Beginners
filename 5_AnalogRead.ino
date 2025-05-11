//UNDERSTANDING HOW TO READ ANALOG VOLTAGE
//AnalogWrite pins are the ones with squiqily thingy beside them and ofcourse 1 and 0 should not be used because they are for communication.
//It is good coding practice to declare variables over just using numbers inside your code.
//It makes it easier to change your values later as you just change what you declared.
//Analog read pins are labeled fron A0 to A5
//Pictures of the circuit will be attached
int readPin=A3;
int readVal;
float V2=0;
int wait(500);

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
//Serial.begin is a command to mean you want to access the serial monitor.

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  //Serial.printIn means print v2 in the serial monitor on a new line.
  delay(wait);

  //The serial monitor display values between zero and and 1023.
  //0 represents zero and 1023 represents 5 volts.


}
