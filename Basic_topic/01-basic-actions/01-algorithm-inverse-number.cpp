/*Write an algorithm that reads a four-digit number and displays the number written in reverse. 
For example, if the number is 4678, the output should be 8764.*/

#include <iostream>

using namespace std;

int main(){
    int n, aux, n_inverse, d1, d2, d3, d4;

    cout<<"Enter a 4 digit number: ";
    cin>>n;

    aux = n;
    d1 = aux / 1000;
    aux %= 1000;
    
    d2 = aux / 100;
    aux %= 100;

    d3 = aux / 10;
    d4 = aux % 10;

    n_inverse = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
    cout<<"The inverse number: "<< n << " looks like this: " <<n_inverse;
    return 0;
}