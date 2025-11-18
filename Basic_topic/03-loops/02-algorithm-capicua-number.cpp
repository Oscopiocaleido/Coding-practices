/*
Make an algorithm that determines whether a number is capicuous (palindromic). A number is capicuous if it reads the same backwards and forwards.
*/

#include <iostream>

using namespace std;

int main(){
    int n, n_capicua, aux1, aux2, digits = 0;
    
    cout <<"Enter a number: "<<endl;
    cin >> n;

    aux2 = n;

    while(aux2!=0){
        aux2 /= 10;
        digits ++;
    }

    aux2 = n;

    for(int i = 0; i < digits; i++){
        aux1 = aux2 % 10;
        aux2 /= 10;
        n_capicua = (n_capicua + aux1) * 10;
    }

    n_capicua /= 10;

    if(n_capicua == n){
        cout <<"The number is capicua"<<endl;
    }else{
        cout <<"The number is not capicua"<<endl;
    }
    return 0;
}