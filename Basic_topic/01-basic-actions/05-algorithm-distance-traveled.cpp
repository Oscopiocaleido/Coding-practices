/*
Write an algorithm that, given the distance traveled by an object and the time it took the object to travel that distance, 
calculates its velocity.
*/

#include <iostream>

using namespace std;

int main(){
    float distance, time, velocity;

    cout<<"Enter the distance traveled by the object and the time it took to reach it: ";
    cin>> distance >> time;

    velocity = distance / time;

    cout<<"the velocity of the object is: "<< velocity;
    return 0;
}