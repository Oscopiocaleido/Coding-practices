/*
Given three integers N, M and K representing dates of the form YYYYYMM, 
write an algorithm that determines the difference in months between the smallest and the largest.
For example, for N=200201 M=200101 K=200401 you would print “36”.
*/

#include <iostream>

using namespace std;

int main(){
    int N = 0, M = 0, K = 0;

    cout<<"Enter the three dates in the form YYYYYMM: "<<endl;
    cin>> N >> M >> K;

    int longer_date, lower_date;

    if(N > M && N > K){
        longer_date = N;
    }else if(M > N && M > K){
        longer_date = M;
    }else{
        longer_date = K;
    }

    if(N < M && N < K){ 
        lower_date = N;
    }else if(M < N && M < K){
        lower_date = M;
    }else{
        lower_date = K;
    }
    
    int year_1, year_2;

    year_1 = lower_date / 100;
    year_2 = longer_date / 100;

    int month_1, month_2;

    month_1 = lower_date % 100;
    month_2 = longer_date % 100;

    int difference = (year_2 - year_1) * 12 + (month_2 - month_1);

    cout<<"The difference between the longest date and the shortest date will be "<<difference<<" months"<<endl;
    return 0;
}