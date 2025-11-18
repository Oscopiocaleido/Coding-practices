/*
Write an algorithm that takes as input a number N and prints the Fibonacci sequence up to N. 
The Fibonacci sequence starts with the numbers 0 and 1 and is calculated at each step by adding the last two numbers of the sequence. 
For example, the first numbers of the Fibonacci sequence are 0, 1, 1, 2, 3, 5, 8, 13, ...
*/

#include <iostream>

using namespace std;

int main(){
    int n = 0, aux1 = 0, aux2 = 1, aux3 = 0;

    cout <<"Enter a  number: "<<endl;
    cin >> n;
    cout<<endl;

    while(aux3 != n){
        cout <<aux3<<endl;
        aux3 = aux1 + aux2;
        aux2 = aux1;
        aux1 = aux3;
    }

    return 0;
}