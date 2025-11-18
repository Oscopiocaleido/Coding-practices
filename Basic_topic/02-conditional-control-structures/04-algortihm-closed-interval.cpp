/*
Given two values V1, V2 that form a closed interval, and a value X, 
make an algorithm to determine whether X is inside or outside the interval.
*/

#include <iostream>

using namespace std;

int main(){
    int V1, V2, X;

    cout<<"Enter the interval numbers: "<<endl;
    cin>> V1 >> V2;

    cout<<"Enter a number: "<<endl;
    cin>> X;

    if((X<=V1 && X>=V2)||(X>=V1 && X<=V2)){
        cout<<"Number is within the interval";
    }
    else{
        cout<<"Number is not within the interval";
    }

    return 0;
}