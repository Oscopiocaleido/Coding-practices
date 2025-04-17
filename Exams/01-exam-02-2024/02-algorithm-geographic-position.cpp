/*
Mark and Alan work remotely from different locations around the world and have a meeting scheduled on Google Meets at 15:00 UTC.
Make a C++ algorithm that, given the geographic position of each (latitude and longitude), determines their time zone and calculates the local time of the meeting for both of them. 
Consider that the Earth is divided into 24 time zones, that each adds or subtracts hours depending on positive (East) or negative (West) longitude, and that the base time (UTC) corresponds to the Greenwich Meridian time zone (longitude = 0). 
For example, if the time zone is -4, the local time at 12:00 UTC would be 8:00. Also, validate that the coordinates entered are within the allowed ranges: latitude between -90° and +90°, and longitude between -180° and +180°.
*/

#include <iostream>

using namespace std;

int main(){
    int longitude_1, latitude_1;
    int longitude_2, latitude_2;
    int UTC;

    cout<<"Enter the longitude and latitude of both users: ";
    cin>> longitude_1 >> latitude_2;
    cin>> longitude_2 >> latitude_2;

    cout<<"Enter the UTC scheduled for the meeting: ";
    cin>> UTC;

    if((latitude_1 < -90 || latitude_1 > 90) || (latitude_2 < -90 || latitude_2 > 90)){
        cout<<"the latitude of one of the two users is outside the range [-90°, +90°]";
    }

    if((longitude_1 < -180 || longitude_1 > 180)||(longitude_2 < -180 || longitude_2 > 180)){
        cout<<"the longitude of one of the two users is outside the range [-180°, +180°]";
    }

    int time_zone_1, time_zone_2;

    time_zone_1 = longitude_1 / 15;
    time_zone_2 = longitude_2 / 15;

    int local_time_1, local_time_2;
    
    if(longitude_1 < 0){
        local_time_1 = UTC - time_zone_1;
    }else if(longitude_1 > 0){
        local_time_1 = UTC + time_zone_1;
    }

    if(longitude_2 < 0){
        local_time_2 = UTC - time_zone_2;
    }else if(longitude_2 > 0){
        local_time_2 = UTC + time_zone_2;
    }

    if(local_time_1 < 0){
        local_time_1 += 24;
    }else if(local_time_1 > 0){
        local_time_1 -= 24;
    }

    if(local_time_2 < 0){
        local_time_2 += 24;
    }else if(local_time_2 > 0){
        local_time_2 -= 24;
    }

    cout<<"The meeting that is at "<<UTC<<"UTC, the time zone for user A is "<<time_zone_1<<" and for user B is "<<time_zone_2<<", the local time for both is "<<local_time_1<<" for A and "<<local_time_2<<" for B";
    return 0;
}