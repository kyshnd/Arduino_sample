// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.

#include <Servo.h> 
 
Servo left;  // create servo object to control a servo 
Servo right;  // create servo object to control a servo 
 
//int pos = 0;    // variable to store the servo position 
//int pos2 = 180; 

int rau = 90;
int rad = 0;
int lau = 90;
int lad = 180;

void setup()
{ 
  left.attach(3);  // attaches the servo on pin 3 to the servo object 
  right.attach(5);  // attaches the servo on pin 5 to the servo object 
} 

void loop() 
{
//  left.write(pos2);
//  right.write(pos);
//  delay(2000);
//  left.write(pos2/2);
//  right.write(pos2/2);
//  delay(2000);

  left.write(rau);
  right.write(lau);
  delay(2000);
  right.write(rad);
  delay(2000);
  left.write(lad);
  delay(2000);
}
