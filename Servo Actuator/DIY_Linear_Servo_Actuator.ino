/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#include <math.h>

Servo servo1;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  servo1.attach(10);  // attaches the servo on pin 10 to the servo object
}

void loop() {
    servo1.write(0);              // 180 tells the continuous rotation servo (CRS) to move forward  
    delay(300);                       // waits X ms for the servo to reach the desired position
    servo1.write(90);              // 90 tells the CRS to stop (use potentiometer on servo to tune to full stop if there is jitter)

//    delay(500);                     // Arbitrary wait time before moving actuator backward34
//
//    servo1.write(0);              // 0 tells the continuous rotation servo (CRS) to move backward
//    delay(200);                       // waits X ms for the servo to reach the original position
//    servo1.write(90); 

    // To loop only once.  Use push button on Uno to trigger sketch again.
//    unsigned int currentLoc = 30;
//    unsigned int targetLoc = 0;
//    unsigned int travelDist;
//    unsigned int travelTime;
//    travelDist = DistCalc(currentLoc, targetLoc);
//    travelTime = round(14.056*travelDist + 45.563);
//    delay(travelTime);
//    servo1.write(90); 
//    delay(200);
//    currentLoc = targetLoc;
//    targetLoc = 30;
//    travelDist = DistCalc(currentLoc, targetLoc);
//    travelTime = round(14.056*travelDist + 45.563);
//    delay(travelTime);
//    servo1.write(90);
    
    while(1){}

}

unsigned int DistCalc (unsigned int currentLoc, unsigned int targetLoc){
  unsigned int travelDist;
  if (targetLoc > currentLoc){
    servo1.write(180);
    travelDist = targetLoc - currentLoc;
  }else{
    servo1.write(0);
    travelDist = currentLoc - targetLoc;
  }
  return travelDist;
}
