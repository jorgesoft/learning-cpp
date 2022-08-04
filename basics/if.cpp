#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout<<"Please enter an positive integer: ";
    cin>>userInput;

    if(userInput % 2 == 0)
        cout<<"User input is even"<<endl;
    else
        cout<<"User input is odd";

    return 0;
}