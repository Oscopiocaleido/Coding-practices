/*
Given the equations of two non-parallel lines y = m1x+b1 and y = m2x+b2, 
write an algorithm that computes their intersection point.
*/

#include <iostream>

using namespace std;

int main(){
    int m1, m2, b1 ,b2;

    cout<<"Enter the terms m1 and b1: "; cin>> m1 >> b1;

    cout<<"Enter the terms m2 and b2: "; cin>> m2 >> b2;

    int term_x = (b2 - b1)/(m1 - m2);
    int term_y = m1 * term_x + b1;

    cout<<"The point of intersection between the two lines is at the pair ("<<term_x<<","<<term_y<<")";
    return 0;
}