#include<bits/stdc++.h>
using namespace std;

void checkStrongNPrint(string& input)
{
    int n = input.length();

    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;

    string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

    for(int i = 0 ; i<n ; i++){
        if(islower(input[i]))
        hasLower = true;
        
        if(isupper(input[i]))
        hasUpper = true;

        if(isdigit(input[i]))
        hasDigit = true;

        size_t special = input.find_first_not_of(normalChars);
        if(special != string::npos)
        specialChar = true;
    }

    cout << "Strength of password:-";
    if (hasLower && hasUpper && hasDigit && specialChar && (n>=6))
    cout << "Strong" << endl;

    else if((hasLower || hasUpper)&& specialChar && (n>=6))
    cout << "Moderate" << endl;

    else
      cout << "Weak" << endl;
}

int main()
{
    cout << "It contains at least one lowercase English character\n" <<
    "It contains at one uppercase English character\n" <<
    "It contains at least one special character. The special characters are @#$%^&*()_+\n" <<
    "Its length is atleast 8\n" <<
    "It contains at least one digit.\n" <<
    "Input a password ";

    string password;
    cin >> password;

    checkStrongNPrint(password);

    return 0;
}
