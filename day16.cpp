#include<iostream>
using namespace std;

int main(){
    int m, n , sum = 0;

    cout << "enter the number to find the sum of its digits : " << endl;
    cin >> n;

    while ( n>0 ) {
        m = n % 10;
        sum += m;
       n = n/10;
    }

    cout << "The sum of digits is :  " << sum << endl;
    return 0;
}
