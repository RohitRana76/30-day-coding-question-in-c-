#include<bits/stdc++.h>
using namespace std;

double min(double x, double y){
    return (x<y)?x:y;
}

double angle(double hour , double minute){

    if(hour<0 || hour>12 || minute<0 || minute>60){
        cout << "wrong output \n" << endl;
    }
    if (hour==12)hour = 0;
    if (minute == 60) minute = 0;

    double hourAngle = 0.5*(hour*60 + minute);
    double minuteAngle = minute*6;

    double anglee = abs(hourAngle - minuteAngle);
    anglee = min(360-anglee, anglee);
    return anglee;
}



int main(){
    double hour;
    double minute;

    cout << "enter the hour in the range of 1-12 " << endl;
    cin >> hour;

    cout << " enter the minute in the range of 1-59 " << endl;
    cin >> minute;

    double angleInDegree = angle(hour , minute);

    if (angleInDegree == 0){
        puts("the minute hand and hour hand overlaps\n");

    } else{
        cout << "the angle between hour hand and minute hamd is : " << angleInDegree << " degree" <<endl;
    }

    return 0;
}
