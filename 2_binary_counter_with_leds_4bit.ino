//Declare pins and make it a habit to do so as it makes it easier to change pins.
//Each pin represents the port number in which you are going to use.

int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
void setup() {
  // put your setup code here, to run once:
  //This code only runs once and tells the arduino which ports you are working with.
  //For example pin2 which has been declared as two is an output so the arduino knows.
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //MAKING A BINARY COUNTER USING LEDS

  //Number 0 -0000
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin4,LOW);   
 digitalWrite(pin5,LOW);

 delay(1000);

//Number 1 - 0001
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin4,LOW);
 digitalWrite(pin5,HIGH);

 delay(1000);

//Number 2 -0010
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin4,HIGH);
 digitalWrite(pin5,LOW);

 delay(1000);

//Number 3 - 0011
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin4,HIGH);
 digitalWrite(pin5,HIGH);

 delay(1000);

 //Number 4 -0100
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);

delay(1000);

//Number 5 - 0101
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);

delay(1000);

//Number 6 - 0110
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);

delay(1000);

//Number 7 - 0111
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);

delay(1000);

//Number 8 - 1000
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);

delay(1000);

//Number 9 - 1001
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);

delay(1000);

//Number 10  -1010
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);

delay(1000);

//Number 11 - 1011
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);

delay(1000);

//Number 12 - 1100
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);

delay(1000);

//Number 13 - 1101
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);

delay(1000);

//Number 14 - 1110
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);

delay(1000);

//Number 15 - 1111
  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);

  delay(1000);

}
//As this part of the code loops then after 15 the leds will flash 0 and so on.
//Using the number 1000 as a number instead of declaring it in the beginning is a mistake.
//If I wanted to change the delay time , I would have to change every value.
// If I had declared it as FOR EXAMPLE int waittime-1000; this would have been avoided.
//If I did that I would easily change the delay time by changing the declared variable.
//Made by Margaret Wanja Karacho