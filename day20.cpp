#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year to determine whether it is leap year or not : \n";
    cin >> year;

    if((year%4==0) && (year%100==0) && (year%400==0)){
        cout << "The given year : " << year << " is leap year " << endl;
    } else{
        cout << "the given year : " << year << " is not a leap year" << endl;
    }
    return 0;
}
