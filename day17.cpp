#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 13, 8, 10, 17};
    int length = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr+length);

    cout << "the sorted array is : " << endl;
    for(int i=0; i<length; i++){
        cout << arr[i] <<endl;
    }

    cout << "the largest element in the array is : " << arr[(length-1)];

    return 0;
}
