/*
Write an algorithm that takes as input a sequence of numbers 0 and 1 ending in -1 representing a binary number and calculates the decimal number represented. 
For example, if the sequence is 1 0 0 1 0 1 -1, your algorithm should print 37.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n = 0, aux1 = 0, aux2 = 0;
    int binary = 0, decimal = 0, digits = 0;

    cout <<"Enter the binary digit: "<<endl;
    cin >> n;

    while(n != -1){
        digits ++;
        binary = (binary + n) * 10;
        cin >> n;
    }

    binary /= 10;
    aux2 = binary;

    for(int i = 0; i < digits; i++){
        aux1 = aux2 % 10;
        aux2 /= 10;
        decimal = decimal + (aux1 * pow(2,i));
    }

    cout<<decimal;
    
    return 0;
}