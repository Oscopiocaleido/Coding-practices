/*
11.Write a recursive function to calculate:
S(n): 1 + 1/2 + 1/3 + ... + 1/n
Assume that you receive the value of n as a parameter.
*/
#include <iostream>

using namespace std;
float successive(float n){
    if(n == 1) return 1;
    return successive(n - 1) + 1/n;
}

int main () {
    float n;

    cin >> n;

    cout<< successive(n);

    return 0;
}
