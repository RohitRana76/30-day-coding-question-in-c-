#include<iostream>
using namespace std;

float celciusToFahrenheitConver(float temp){
     float tempInDegFahrenheit = (temp * 9 / 5) + 32;

     return tempInDegFahrenheit;

}

int main(){
    // (0°C × 9/5) + 32 = 32°F

    float tempInDegCelcius;

    cout << "Enter the value in degree celcius " << endl;
    cin >> tempInDegCelcius;


    cout << "The temperature in fahrenheit is : " << celciusToFahrenheitConver(tempInDegCelcius) << " degree Fahrenheit";


    return 0;
}
