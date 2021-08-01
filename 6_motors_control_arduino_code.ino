// C++ code
//
#include <Servo.h>
Servo myServo1 ;
Servo myServo2 ;
Servo myServo3 ;
Servo myServo4 ;
Servo myServo5 ;
Servo myServo6 ;
int pushButton1 = 2;
int pushButton2 = 4;
int pushButton3 = 7;

void setup(){
  myServo1.attach(3);
  myServo2.attach(5);
  myServo3.attach(6);
  myServo4.attach(9);
  myServo5.attach(10);
  myServo6.attach(11);

myServo1.write(90); // initial angle  for servo
myServo2.write(90);
myServo3.write(90); 
myServo4.write(180); 
myServo5.write(180);
myServo6.write(180);
   pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
   pinMode(3, OUTPUT);
  pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(7, INPUT);
  

  
  Serial.begin(9600);
}
void loop(){
  int buttonState1 = digitalRead(pushButton1);
   int buttonState2 = digitalRead(pushButton2);
  int buttonState3 = digitalRead(pushButton3);

  if (buttonState1 == 1) {
   
  myServo1.write(180);
  myServo2.write(180);
  myServo3.write(180);
  myServo4.write(90);
  myServo5.write(90);
  myServo6.write(90);
  }
   if (buttonState2 == 1) {
   
  myServo1.write(90);
  myServo2.write(90);
  myServo3.write(90);
  myServo4.write(180);
  myServo5.write(180);
  myServo6.write(180);
  }
  if (buttonState3 == 1) {
   
  myServo1.write(180);
  myServo2.write(90);
  myServo3.write(180);
  myServo4.write(90);
  myServo5.write(180);
  myServo6.write(90);
  }
  delay(15);
}
