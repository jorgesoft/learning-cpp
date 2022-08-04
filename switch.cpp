// simple calculator with switch flow

#include <iostream>
using namespace std;

int main() {
    double arg1, arg2;
    double res;
    char op;

    cout<<"Please enter an expresion of the form arg1 op arg2: ";
    cin>>arg1>>op>>arg2;

    switch (op)
    {
    case '+':
        res = arg1 + arg2;
        cout<<res<<endl;
        break;
    case '-':
        res = arg1 - arg2;
        cout<<res<<endl;
        break;
    case '*':
        res = arg1 * arg2;
        cout<<res<<endl;
        break;
    case '/':
        if (arg2 != 0)
        {
            res = arg1 / arg2;
            cout<<res<<endl;
        }
        else
        {
            cout<<"Ilegal expression";
        }
        break;
    default:
        cout<<"Ilegal expression";
        break;
    }

    return 0;
}