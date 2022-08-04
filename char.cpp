#include <iostream>
#include <string>

int main()
{
    char lowerCase, upperCase;
    std::string s;

    std::cout << "Enter a character: ";
    std::cin >> lowerCase;

    upperCase = (char)(lowerCase - 32);

    s = (std::string) "The upper case value of " + lowerCase + " is " + upperCase;
    
    std::cout << s <<std::endl;

    return 0;

}