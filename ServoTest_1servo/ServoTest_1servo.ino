// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo1;  // create servo object to control a servo 
 
int pos = 0;    // variable to store the servo position 
int pos2 = 180; 
void setup() 
{ 
  myservo1.attach(3);  // attaches the servo on pin 3 to the servo object 
} 
 
 
void loop() 
{ 
  myservo1.write(pos2);
  delay(2000);
  myservo1.write(pos2/2);
  delay(2000);
} 
