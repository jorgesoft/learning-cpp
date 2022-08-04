// simple for loop

#include <iostream>
using namespace std;

int main() {
    int n, counter;

    cout<<"Enter a positive integrer: ";
    cin>>n;

    for (counter=1; counter <= n; counter++)
    {
        cout<<counter<<endl;
    }
  
    return 0;
}