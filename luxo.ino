#include <Servo.h>

Servo joint1;
Servo joint2; 
Servo bottom;// create servo object to control a servo

int potpinj1 = A1;
int potpinj2 = A2;
int potpinbott = A3;
 // analog pin used to connect the potentiometer
int j1val;
int j2val;
int bottval;    // variable to read the value from the analog pin

void setup() {
  joint1.attach(7); 
  joint2.attach(8);
  bottom.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop() {
  j1val = analogRead(potpinj1);            // reads the value of the potentiometer (value between 0 and 1023)
  j1val = map(j1val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  joint1.write(j1val);                  // sets the servo position according to the scaled value
  delay(15);      

  j2val = analogRead(potpinj2);            // reads the value of the potentiometer (value between 0 and 1023)
  j2val = map(j2val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  joint2.write(j2val);                  // sets the servo position according to the scaled value
  delay(15);

  bottval = analogRead(potpinbott);            // reads the value of the potentiometer (value between 0 and 1023)
  bottval = map(bottval, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  bottom.write(bottval);                  // sets the servo position according to the scaled value
  delay(15);                 
}