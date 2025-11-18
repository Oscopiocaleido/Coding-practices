#include <iostream>

using namespace std;

int main(){
    int n = 4, m = 4;
    int a [n][m]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j]; 
        }
        cout<<endl;
    }*/

    float total = 0;

    for(int i = 0, j = n-1; i > 0; i++, j--){
        total+= a[i][j];
    }
    cout <<total;
    return 0;
}