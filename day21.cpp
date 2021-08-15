#include<iostream>
using namespace std;

int main(){
    int num;
     int binaryArr[30];

    cout << "Enter the number : " << endl;
    cin >> num;

    int i =0;

    while(num!=0){

        int rem = num % 2;
        
         binaryArr[i] = rem;
        //  cout << binaryArr[i];
        i++;
    
        if(num/2==1){
            rem = 1;
            binaryArr[i] = rem;
            break;
        }

      
    //    i++;

        num = num / 2;
    }

    for(int j = i; j >= 0; j--){
        cout << binaryArr[j];
    }

    
    return 0;
}
