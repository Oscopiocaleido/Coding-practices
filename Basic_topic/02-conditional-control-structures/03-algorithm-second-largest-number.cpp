/*Make an algorithm that takes 2 different numbers as input and prints the second largest number.*/

#include <iostream>

using namespace std;

int main(){
    int n1, n2;

    cout<<"Enter two numbers: "<<endl;
    cin >> n1 >> n2;

    if(n1 < n2){
        cout<< n1 <<" is the second largest number";
    }else{
        cout<< n2 <<" is the second largest number";
    }

    return 0;
}