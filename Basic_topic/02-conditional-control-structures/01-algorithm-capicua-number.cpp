/*
Make an algorithm that prints “Capicua” if a 5-digit input number is capicua, or “Not capicua” otherwise. 
A number is capicua if it is written the same backwards and forwards. 
For example, 545 is a capicua number.
*/

#include <iostream>

using namespace std;

int main(){
    int n, aux, n_reversed;

    cout<<"Enter the number: "<<endl;
    cin>> n;

    int d1, d2, d3, d4, d5;

    aux = n;

    d1 = aux % 10;
    aux /= 10;

    d2 = aux % 10;
    aux /= 10;

    d3 = aux % 10;
    aux /= 10;

    d4 = aux % 10;
    d5 = aux / 10;

    n_reversed = (d1 * 10000) + (d2 * 1000) + (d3 * 100) + (d4 * 10) + d5;

    if(n_reversed == n){
        cout<<"Number is capicua"<<endl;
    }else{
        cout<<"Number is not capicua"<<endl;
    }
    
    return 0;
}