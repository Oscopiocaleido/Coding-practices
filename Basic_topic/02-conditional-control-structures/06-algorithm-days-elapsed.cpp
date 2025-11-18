/*
Write an algorithm that receives as input a date (day and month) of the current year and prints on the screen the number of days elapsed since January 1st.
*/

#include <iostream>

using namespace std;

int main(){
    int day, month;
    int days_elapsed;

    cout<<"Enter the day and month: "<<endl;
    cin>> day >> month;

    switch(month){
        case 1:

        cout<<"The number of days elapsed since January 1st is "<<day;

        break;
        case 2:

        days_elapsed = 31 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 3:

        days_elapsed = 59 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 4:

        days_elapsed = 90 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 5:

        days_elapsed = 120 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 6:

        days_elapsed = 151 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 7:

        days_elapsed = 181 + day;        
        
        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 8:

        days_elapsed = 212 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 9:

        days_elapsed = 243 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;

        case 10:

        days_elapsed = 273 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 11:

        days_elapsed = 304 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
        case 12:

        days_elapsed = 334 + day;

        cout<<"The number of days elapsed since January 1st is "<<days_elapsed;

        break;
    }

    return 0;
}