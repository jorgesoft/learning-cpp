// count digits and sum the value

#include <iostream>
using namespace std;

int main() {
    int num, sumDigits, countDigits, currDigit;

    cout<<"Enter a positive integer: ";
    cin>>num;
    sumDigits = 0;
    countDigits = 0;
    cout<<num;
    while (num != 0)
    {
        currDigit = num%10;
        countDigits++;
        sumDigits += currDigit;
        num = num/10;
    }

    cout<<" has "<<countDigits<<" digits";
    cout<<" and their sum is "<<sumDigits;
    

    return 0;
}