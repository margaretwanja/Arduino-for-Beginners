//UNDERSTANDING ARDUINO FOR LOOPS
int wait=3000;
int red=2;
int yellow=3;
int one=1000;
int yellowBlink=3;
int redBlink=5;
int j;

void setup() {
  // put your setup code here, to run once:
 pinMode(red,OUTPUT);
 pinMode(yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=yellowBlink; j=j+1){
digitalWrite(yellow,HIGH);
delay(one);
digitalWrite(yellow,LOW);
delay(one);
  }
  for(j=1; j<=redBlink; j=j+1){
digitalWrite(red,HIGH);
delay(one);
digitalWrite(red,LOW);
delay(one);
  }

}
