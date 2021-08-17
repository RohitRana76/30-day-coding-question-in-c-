#include<iostream>
using namespace std;

float cmToInchConvert(float num){
    float inchValue = 2.54;
    float inchToCmForm = num / inchValue;

    return inchToCmForm;
}
float cmToKmConvert(float num){
    float kmValue = 100000;
    float KmToCmForm = num / kmValue;

    return KmToCmForm;
}
float cmToMetreConvert(float num){
    float mValue = 100;
    float MtoCmForm = num / mValue;

    return  MtoCmForm;
}

int main(){
    float valueInCm;

    cout << "Enter the value in cm " << endl;
    cin >> valueInCm;

    cout << "The converted value of : " << valueInCm << " cm" << " in inch is " << cmToInchConvert(valueInCm) << " inch" <<endl;
    cout << "The converted value of : " << valueInCm << " cm"<< " in kilometre is " << cmToKmConvert(valueInCm) << " km"<< endl;
    cout << "The converted value of : " << valueInCm << " cm" << " in metre is " << cmToMetreConvert(valueInCm)<< " m" << endl;
    
    return 0;
}
