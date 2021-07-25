#include<iostream>
using namespace std;

int main(){
    int srScore[] = {66,57,54,53,64,52,59};
    int n = 7;
    int pass = 0;
    int temp;
    cout<<"before sorting the score are arranged as :"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<srScore[i]<<" ";
    }

 for(int i=0;i<n-1;i++) //for no of passes
 {
     for(int j=0;j<n-i-1;j++){
         if(srScore[j]>srScore[j+1])
         {
             temp = srScore[j];
             srScore[j] = srScore[j+1];
             srScore[j+1] = temp;
         }
     }
     pass++;
 }
 cout<<endl;

 cout<<"after sorting the array are arranged as and Sushana best score is in the last line :"<<endl;
 for(int i=0;i<n-1;i++){
     cout<<srScore[i]<<" ";
 }

 



    return 0;
}
