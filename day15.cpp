#include<iostream>
using namespace std;

int main(){
    int dvdExpenditurePercent = 12;
    int dvdInDollar = 42;
    int totalPercent = 100;
    int savingPercent = totalPercent - dvdExpenditurePercent;

    int weeklyEarning = dvdInDollar * totalPercent / dvdExpenditurePercent;

    int savingInDollar = savingPercent*weeklyEarning/totalPercent;

    cout << " the amount he invested in saving is : " << savingInDollar;
    return 0;
}
