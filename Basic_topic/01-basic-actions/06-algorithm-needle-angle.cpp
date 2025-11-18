/*
Let us assume an analog clock (with hands). Given the exact time (hours and minutes), write an algorithm that calculates the angle between the two hands.
For example, at 3:00 the angle will be 90 degrees.
 At 3:15 the angle will be 7.5 degrees.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int hour, minute;
    float angle, hourAngle, minuteAngle;

    cout<<"Enter the hour and minutes: ";
    cin>> hour >> minute;

    hour %= 12; // Make sure that the time is in the range 0 to 11.

    hourAngle = (hour * 30) + (minute * 0.5);
    minuteAngle = (minute * 6);

    angle = abs(hourAngle - minuteAngle);

    cout<<"The angle between clock hands is: "<< angle;
    return 0;
}