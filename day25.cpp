#include<iostream>
using namespace std;

int main(){
    int manAgeInMinutes = 13772160;
    int oneHour = 60;
    int twentyFourHour = 24 * oneHour;
    int oneDayMinutes = twentyFourHour;
    int daysInYr = 365;

    int oneYrMinutes = oneDayMinutes * daysInYr;

    cout << "one year minutes " << oneYrMinutes << endl;

    // int oneMinuteIntoYr = 1 / oneYrMinutes;

    int manAgeInYears =  manAgeInMinutes / oneYrMinutes;

    cout << " The age of the man in years is " << manAgeInYears ;
    return 0;
}
