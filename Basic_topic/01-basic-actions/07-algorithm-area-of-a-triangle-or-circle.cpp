/*
Write an algorithm that takes as input the base and height of a triangle, the radius of a circle and determines if the triangle has an area greater than the circle.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float triangle_base, triangle_height, circle_radius;

    cout<<"Enter the base of the triangle: ";
    cin>> triangle_base;

    cout<<"Enter the height of the triangle: ";
    cin>> triangle_height;

    cout<<"Enter the radius of the circle: ";
    cin>> circle_radius;

    float triangle_area = (triangle_base * triangle_height) / 2;
    float circle_area = pow(3.14 * circle_radius, 2);

    if(triangle_area>=circle_area){
        cout<<"The area of the triangle is greater than or equal to the area of the circle";
    } else if (circle_area>=triangle_area){
        cout<<"The area of the circle is greater than or equal to the area of the triangle";
    }

    return 0;
}