//Program to make the exact 200ml water available to make any dish for chef as he has one 500ml cup and one 300ml cup available
#include<iostream>
using namespace std;

int main(){
    int iAm500MlCup = 500;
    int iAm300MlCup = 300;

    cout<<"I, 500 ml cup containing water which is :"<<iAm500MlCup<<"ml"<<endl;
    cout<<"The 300ml cup can contain maximum water upto  :"<<iAm300MlCup<<"ml"<<endl;

    cout<<"Before pouring some of the water from 500ml cup to 300 ml cup, the water in 500 ml cup is :"<<iAm500MlCup<<"ml"<<endl;
    iAm500MlCup = iAm500MlCup - iAm300MlCup;

    cout<<"Now the exact water which chef require to make dish after pouring is :"<<iAm500MlCup<<"ml"<<endl;

    return 0;
}

