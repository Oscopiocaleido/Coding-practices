/*Write an algorithm that, given the lengths of the legs of a right triangle, calculates the length of its hypotenuse.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float opposite, adjacent, hypotenuse;

    cout<<"Enter the opposite and adjacent cathetum: ";
    cin>> opposite >> adjacent;

    hypotenuse = sqrt(pow(adjacent,2)+pow(opposite,2));

    cout<<"The length of the hypotenuse is: "<< hypotenuse;
    return 0;
}