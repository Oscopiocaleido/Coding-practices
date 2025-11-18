/*
Make an algorithm that receives as input a number between 1 and 12 and prints the name of the corresponding month. 
Take into account possible erroneous values in the input
*/

#include <iostream>

using namespace std;

int main(){
    int month;

    cout <<"Enter the number : "<<endl;
    cin >> month;

    if(month<1){
        cout <<"There are no negative months or month 0"<<endl;
        return 0;
    }

    switch(month){
        case 1:

        cout<<"January";

        break;
        case 2:

        cout<<"February";

        break;
        case 3:

        cout<<"March";

        break;
        case 4:

        cout<<"April";

        break;
        case 5:

        cout<<"May";

        break;
        case 6:

        cout<<"June";

        break;
        case 7:

        cout<<"July";

        break;
        case 8:

        cout<<"August";

        break;
        case 9:

        cout<<"September";

        break;
        case 10:

        cout<<"October";

        break;
        case 11:

        cout<<"November";

        break;
        case 12:

        cout<<"December";

        break;

        default:
        cout<<"Only 12 months";
    }

    return 0;
}