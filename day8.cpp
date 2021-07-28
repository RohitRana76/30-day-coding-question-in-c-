#include<iostream>
using namespace std;

int multiply(int x, int y){
    if(y==0)
    return 0;

    if(y>0)
    return (x + multiply(x , y-1));

    
}

int main(){
    int oneDayPassanger = 1200000;
    int oneYearDays = 365;
    int totalPassangerInYear = multiply(oneDayPassanger, oneYearDays);
    cout<<"Total passanger which travels through bus system are :"<<totalPassangerInYear;
    return 0;
}
