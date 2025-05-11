//UNDERSTANDING THE ARDUINO ANALOG WRITE
//of course use variables it is coding good practice
int redPin=9;
int bright=255;
int medium=5;
int low=0;
int wait=2000;

void setup() {
  // put your setup code here, to run once:
  pinMode (redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //The number we put should between 0 and 255.
  //Zero represents zero volts and 255 represents five volts.
  analogWrite(redPin,bright);

  delay(wait);

  analogWrite(redPin,medium);

  delay(wait);

  analogWrite(redPin,low);

  delay(wait);
}
//with this you can play with different levels of brigtness of an LED