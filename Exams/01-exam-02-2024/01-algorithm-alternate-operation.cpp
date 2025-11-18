/*
Given a positive integer of up to 6 digits, it is necessary to perform an operation called “Alternating Operation”, which consists of separating the digits of the original number into two groups: 
those corresponding to the odd positions and those of the even positions, thus generating two new numbers. 
If the number formed by the digits in odd positions is greater than the one formed by the digits in even positions, the difference between both is calculated (subtracting the even number from the odd number). 
Otherwise, the product of the two is calculated. For example, for the number 572314, the numbers 521 (digits in odd positions) and 734 (digits in even positions) are generated; as 734 > 521, the result will be the product 734 * 521 = 382, 414.
*/

#include <iostream>

using namespace std;

int main(){
    int original_n, aux;
    int d1, d2, d3, d4, d5, d6;
    int n_even, n_odd, result, count;

    cout<<"Enter a number: ";
    cin>> original_n;

    aux = original_n;

    while(original_n != 0){
        original_n /= 10;
        count ++;
    }

    if(count == 3){
        d1 = aux / 100;
        aux %= 100;
        d2 = aux / 10;
        d3 = aux % 10;

        n_even = d2;
        n_odd = (d1 * 10) + d3;

        if(n_odd>n_even){
            result = n_odd - n_even;
            cout<<"Since the odd number is greater than the even number, the result is: "<<result;
        }else if(n_even>n_odd){
            result = n_even * n_odd;
            cout<<"Since the even number is greater than the odd number, the result is: "<<result;
        }
    }
    else if(count == 4){
        d1 = aux / 1000;
        aux %= 1000;
        d2 = aux / 100;
        aux %= 100;
        d3 = aux / 10;
        d4 = aux % 10;

        n_even = (d2 * 10) + d4;
        n_odd = (d1 * 10) + d3;

        if(n_odd>n_even){
            result = n_odd - n_even;
            cout<<"Since the odd number is greater than the even number, the result is: "<<result;
        }else if(n_even>n_odd){
            result = n_even * n_odd;
            cout<<"Since the even number is greater than the odd number, the result is: "<<result;
        }
    }
    else if(count == 5){
        d1 = aux / 10000;
        aux %= 10000;
        d2 = aux / 1000;
        aux %= 1000;
        d3 = aux / 100;
        aux %= 100;
        d4 = aux / 10;
        d5 = aux % 10;

        n_even = (d2 * 10) + d4;
        n_odd = (d1 * 100) + (d3 * 10) + d5;

        if(n_odd>n_even){
            result = n_odd - n_even;
            cout<<"Since the odd number is greater than the even number, the result is: "<<result;
        }else if(n_even>n_odd){
            result = n_even * n_odd;
            cout<<"Since the even number is greater than the odd number, the result is: "<<result;
        }
    }
    else if(count == 6){
        d1 = aux / 100000;         
        aux %= 100000;            
        d2 = aux / 10000;         
        aux %= 10000;           
        d3 = aux / 1000;      
        aux %= 1000;          
        d4 = aux / 100;     
        aux %= 100;        
        d5 = aux / 10;    
        d6 = aux % 10;    

        n_even = (d2 * 100) + (d4 * 10) + d6;
        n_odd = (d1 * 100) + (d3 * 10) + d5;

        if(n_odd>n_even){
            result = n_odd - n_even;
            cout<<"Since the odd number is greater than the even number, the result is: "<<result;
        }else{
            result = n_even * n_odd;
            cout<<"Since the even number is greater than the odd number, the result is: "<<result;
        }
    }
    
    return 0;
}