/*Write an algorithm that transforms a four-bit binary number to a decimal number.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n_binary, n_decimal;
    int aux, d1, d2, d3, d4;

    cout<<"Enter the 4-bit binary number: ";
    cin>>n_binary;

    aux = n_binary;

    d1 = aux / 1000;
    aux %= 1000;

    d2 = aux / 100;
    aux %= 100;

    d3 = aux / 10;
    d4 = aux % 10;

    n_decimal= (d4 * pow(2,0)) + (d3 * pow(2,1)) + (d2 * pow(2,2)) + (d1 * pow(2,3));

    cout<<"The binary number: "<< n_binary <<" is in decimal: "<< n_decimal;
    return 0;
}

