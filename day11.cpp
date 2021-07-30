#include<iostream>
using namespace std;

int main(){
    int totalDistance  = 2052;
    float distInKm = float(totalDistance * 1.609);
    // float oneDayCovered = distInKm/6;
    int totalDaysDist = 6;
   float oneDayDist = distInKm/totalDaysDist;

   float avgBwStops = oneDayDist/2;

   cout<<"The average time between two stops : "<<avgBwStops<<endl;


    return 0;
}
