/*
Write an algorithm that reads a number N and calculates and prints the number of digits in N.
*/

#include <iostream>

using namespace std;

int main(){
    int n, aux, count = 0;

    cout <<"Enter a number: "<<endl;
    cin >> n;

    aux = n;
    while(aux != 0){
        aux /= 10;
        count++;
    }

    cout <<"The number "<<n<<" has "<<count<<" digits";
    return 0;
}