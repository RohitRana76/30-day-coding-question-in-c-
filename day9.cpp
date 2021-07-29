#include<iostream>
using namespace std;

int main(){
    int nurseH = 8; 
    int nurseP = 10;
    int nurseC = 9;
    int nurseG = 8;
    int nurseM = 7;
    int nurseMu = 12;#include<iostream>
using namespace std;

float workingHour(int a , int b, int c , int d, int e, int f, int nurseC){
    float totalNurseH = float(a+b+c+d+e+f);
    // float totalNurseCount = float(nurseC);
    float temp = float(totalNurseH + nurseC);
    float avgHours = totalNurseH/nurseC;

    return avgHours;
}

int main(){
    int nurseH = 8; 
    int nurseP = 10;
    int nurseC = 9;
    int nurseG = 8;
    int nurseM = 7;
    int nurseMu = 12;
    int nCount = 6;
       
//    float totalNurseH =float(nurseH+nurseP+nurseC+nurseG+nurseM+nurseMu);
//    float nCount = 6;

//    float avgHour = totalNurseH/nCount;

    
//     cout<<"average hours : "<<avgHour<<endl;

float avgHours = workingHour(nurseH,nurseP,nurseC,nurseG,nurseM,nurseMu,nCount);
// cout<<"Total no of average hours are : "<<avgHours;
printf("Average Hours is %f",avgHours);

    return 0;
}
    float avg;
    
    avg =(float(nurseH+nurseP+nurseC+nurseG+nurseM+nurseMu)/(float)6);

    
    cout<<"average hours : "<<avg<<endl;

    return 0;
    
    //or there can be one of more solution of the same problem
    #include<iostream>
using namespace std;

int main(){
    int a=8 , b=10 , c=9 ,d=11 , f=17, g=18 , nCount = 6;
    float h = float(a);
    float i = float(b);
    float j = float(c);
    float k = float(d);
    float l = float(f);
    float m = float(g);
    float n = float(nCount);
    float totalWorkingHours = float(h+i+j+k+l+m);
    

    float avghours = totalWorkingHours/n;

    cout<<"The total no of average hours is :"<<avghours;
    return 0;
}
}
