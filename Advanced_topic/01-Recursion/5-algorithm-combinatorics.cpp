#include <iostream>

using namespace std;

int combinatorics(int n, int k){
    if ( n == k) return 1;
    if ( k == 0) return 1;
    if (k > n) return 0;
    return combinatorics(n-1, k-1) + combinatorics(n-1, k);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << combinatorics(n, k) <<endl;
    return 0;
}
