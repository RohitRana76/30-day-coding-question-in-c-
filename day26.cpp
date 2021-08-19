#include<iostream>
using namespace std;

int main(){
    float timeSeconds;
    float kph , mph;
    float distance , hour, minute , second;

    cout << "Enter the distance in metre " << endl;
    cin >> distance;

    cout << "Enter the hour : " << endl;
    cin >> hour;

    cout << "Enter the minute " << endl;
    cin >> minute;

    cout << "Enter the second " << endl;
    cin >> second;

    timeSeconds = (hour * 3600) + (minute * 60) + second;

    float mile = 0.621371;

    kph = (distance / 1000.0f) / (timeSeconds / 3600.0f);

    cout << "The time in km per hour is : " << kph << " km/h" << endl;
    mph = kph / mile;

    cout << "The time in mile per hour is :" << mph << " mile/hr" << endl;
    return 0;
}
