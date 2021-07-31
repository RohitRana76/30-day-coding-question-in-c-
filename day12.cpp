#include<iostream>
using namespace std;

int main(){
    int firstMovieDuration = 100;
    int secondMovieDuration = 110;

    float totalMovieDuration = float(firstMovieDuration + secondMovieDuration);
    float totalDurationInHr = float(totalMovieDuration/60);
    // float conversionInFloatTime = float()
    cout<<"The time duration for first movie watching is : "<<firstMovieDuration<<" minutes"<<endl;
    cout<<"The time duration for second movie watching is : "<<secondMovieDuration<<" minutes"<<endl;
    cout<<"The total duration to watch both movies in minutes is : "<<totalMovieDuration<<" minutes"<<endl;
    cout<<"The total watching duration time for both movies in hour is : "<<totalDurationInHr<<" hour "<<endl;

    return 0;
}
