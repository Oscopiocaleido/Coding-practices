/*
Create an algorithm that takes as input the exact time (hours, minutes, seconds and AM/PM),
and indicates the number of seconds elapsed during that day.
*/

#include <iostream>

using namespace std;

int main(){
    int hours, minutes, seconds;
    char AM_PM;

    cout<<"Enter the exact time (hour, minutes, seconds and AM/PM), in that order: "<<endl;
    cin>> hours >> minutes >> seconds >> AM_PM;

    if(AM_PM == 'P' && hours != 12){
        hours += 12;
    }else if(AM_PM == 'A' && hours == 12){
        hours = 0;
    }

    int total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    cout<<"The total number of seconds elapsed during the day is "<<total_seconds<<" seconds"<<endl;
    
    return 0;
}