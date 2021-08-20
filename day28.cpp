#include<iostream>
using namespace std;

int gcd(int a , int b){
    if(a==0) return b;

    if(b==0) return a;

    if(a==b) return b;

    if(a>b){
        return gcd(a-b, b);
    } else{
        return gcd(a, b-a);
    }
}

int main(){
    int num1, num2;
    cout << "Enter the first number\n";
    cin >> num1;

    cout << "Enter the second number\n";
    cin >> num2;

    int fact = gcd(num1, num2);

    int num1Ratio = num1 / fact;

    int num2Ratio = num2 / fact;

    cout << "The ratio of " << num1 << " and " << num2 << " is " << num1Ratio << " : " << num2Ratio;

    
    return 0;
}
