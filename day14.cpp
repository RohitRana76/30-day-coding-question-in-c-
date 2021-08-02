#include<iostream>
using namespace std;

int main(){
    int k , r;
     cout << "enter the no of glasses kara has sold whole day :"<< endl;
     cin>>k;
     cout << "enter the no of glasses Rani has sold whole day :"<< endl;
     cin>>r;

     int karaCentPerGlass = 5;
     int raniCentPerGlass = 7;

     int karaTotalMoney = k * karaCentPerGlass;
     int raniTotalMoney = r * raniCentPerGlass;

     cout << "Total money earned by Kara whole day : "<< karaTotalMoney <<endl;
     cout << "Total money earned by Rani whole day : "<< raniTotalMoney <<endl; 

     if (karaTotalMoney > raniTotalMoney){
         cout<<" Kara earned more money than Rani and by the total amount of : " << (karaTotalMoney - raniTotalMoney) << " cent";
     }
     else{
         cout<<" Rani earned more money than Kara and by the total amount of : " << (raniTotalMoney - karaTotalMoney) << " cent";
     }

    return 0;
}
