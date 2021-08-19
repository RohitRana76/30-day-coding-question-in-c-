#include<iostream>
using namespace std;

int sum(int* n1, int* n2 ){
    return *n1 + *n2;
}

int diff(int* n1, int* n2 ){
    return *n1 - *n2;
}

int product(int* n1, int* n2 ){
    return *n1 * *n2;
}

int maxNum(int* n1, int* n2 ){
    return (*n1 > *n2) ? *n1 : *n2;
}

int minNum(int* n1, int* n2 ){
    return (*n1 < *n1) ? *n1 : *n2;
}

int avg(int* n1, int* n2 ){
    return (*n1 + *n2) / 2;
}

int main(){
    int num1;
    int num2;

    cout << "Enter the first number\n";
    cin >> num1;
    
    cout << "Enter the second number\n";
    cin >> num2;

//    int* pnum1 = &num1;
//    int* pnum2 = &num2;

   cout << "Sum of " << num1 << " and " << num2 << " is " << sum(&num1, &num2) << endl; 
   cout << "Differnce of " << num1 << " and " << num2 << " is " << diff(&num1, &num2) << endl; 
   cout << "Maximum of " << num1 << " and " << num2 << " is " << maxNum(&num1, &num2) << endl; 
   cout << "Minimum of " << num1 << " and " << num2 << " is " << minNum(&num1, &num2) << endl; 
   cout << "Product of " << num1 << " and " << num2 << " is " << product(&num1, &num2) << endl; 
   cout << "Average of " << num1 << " and " << num2 << " is " << avg(&num1, &num2) << endl; 

   
    return 0;
}
