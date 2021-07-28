#include<iostream>
using namespace std;

int main(){
    int nurseH = 8; 
    int nurseP = 10;
    int nurseC = 9;
    int nurseG = 8;
    int nurseM = 7;
    int nurseMu = 12;
    float avg;
    
    avg =(float(nurseH+nurseP+nurseC+nurseG+nurseM+nurseMu)/(float)6);

    
    cout<<"average hours : "<<avg<<endl;

    return 0;
}
