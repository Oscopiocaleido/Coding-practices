/*
Make an algorithm that takes as input a number less than 100 and determines if it is prime 
(remember that a number N is prime if its only divisors are 1 and N).
*/

#include <iostream>

using namespace std;

int main(){
    int n;

    cout <<"Enter a number less than 100: "<<endl;
    cin >> n;

    if(n/1 == n && n/n == 1){
        cout<<"The number "<<n<<" is prime";
    }else{
        cout<<"The number "<<n<<" is not prime";
    }

    return 0;
}