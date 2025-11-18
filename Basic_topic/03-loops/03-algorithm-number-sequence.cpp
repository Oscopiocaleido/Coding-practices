/*
Given a sequence of numbers ending in zero, devise an algorithm to calculate the percentage and sum of odd numbers, 
the percentage and sum of even numbers, and the sum of all numbers, and how many numbers were entered.
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    int sum_pairs = 0, sum_odd = 0, count_pairs = 0, count_odd = 0;
    int percen_pairs = 0, percen_odd = 0;
    int sum_total, count_total = 0;

    cout <<"Enter a number: "<<endl;
    cin >> n;

    while(n != 0){
        
        if(n % 2 == 0){
            count_pairs++;
            sum_pairs += n;
        }
        else{
            count_odd ++;
            sum_odd += n;
        }
        
        count_total ++;
        sum_total += n;

        cin >> n;
    }

    percen_pairs = ((float)count_pairs / count_total) * 100;
    percen_odd = ((float)count_odd / count_total) * 100;

    cout <<"The percentage and the sum of the odd numbers is: "<<endl;
    cout <<"%"<<percen_odd<<endl;
    cout <<"Sum: "<<sum_odd<<endl;

    cout <<"The percentage and the sum of the pairs numbers is: "<<endl;
    cout <<"%"<<percen_pairs<<endl;
    cout <<"Sum: "<<sum_pairs<<endl;

    cout <<"The sum total of all the numbers is: "<<sum_total<<endl;
    cout <<"The total number of numbers entered was: "<<count_total;

    return 0;
}
