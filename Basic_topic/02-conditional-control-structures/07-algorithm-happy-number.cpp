/*
A 4-digit number is happy if the first two digits are greater than the last two digits. For example 5612 is happy because 56 is greater than 12. A 4-digit number is increasing if each digit is greater than the previous digit.
For example 1569 is increasing because 9 > 6 > 5 > 1. Any number that is happy and increasing is said to be a very happy number. Any number that is neither happy nor increasing is said to be unhappy.
Make an algorithm that takes as input a 4-digit number and prints the type of number found, according to the described classification.
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    int d1, d2, d3, d4;
    bool happy = false, growing = false;

    cout << "Enter the 4-digit number: " <<endl;
    cin >> n;

    if(happy == false){
        d1 = n / 10;
        d2 = n % 10;
        if(d1>d2){
            happy = true;
        }
    }

    if(growing == false){
        int aux = n;
        d4 = aux % 10;
        aux /= 10;
        d3 = aux % 10;
        aux /= 10;
        d2 = aux % 10;
        d1 = aux / 10;

        if(d4>d3 && d3>d2 && d2>d1){
            growing = true;
        }
    }

    if(happy == true){

        cout<<"The number "<<n<<" is happy, but not growing";

    } else if(growing == true){

        cout<<"The number "<<n<<" is increasing, but it is not happy";

    } else if(happy == true && growing == true){

        cout<<"The number "<<n<<" is very happy, which means that it is happy and growing";

    } else if(happy == false && growing == false){

        cout<<"The number "<<n<<" is unhappy, which means that it is not happy and is not growing";

    }
    
    return 0;
}