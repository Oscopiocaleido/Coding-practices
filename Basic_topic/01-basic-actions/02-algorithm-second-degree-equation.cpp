/*Write an algorithm that receives as input the coefficients A, B and C of a second degree equation (Ax^2 + Bx + C = 0),
 and prints the values of x on the screen. Assume that the equation always has a solution in real numbers.
  Recall that the solution of a second degree equation is given by x = (-b±√(b2-4ac))/(2a).*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int quadratic, lineal, independent;
    int solution_positive, solution_negative;

    cout<<"Enter the quadratic coefficient, linear coefficient and independent term: ";
    cin>> quadratic >> lineal >> independent;

    solution_negative= ( (-lineal) - sqrt((lineal*lineal) - (4 * (quadratic * independent))) ) / (2 * quadratic);
    solution_positive= ( (-lineal) + sqrt((lineal*lineal) - (4 * (quadratic * independent))) ) / (2 * quadratic);

    cout<<"The positive solution of the equation is: "<< solution_positive << " and the negative solution is: "<< solution_negative;

    return 0;
}