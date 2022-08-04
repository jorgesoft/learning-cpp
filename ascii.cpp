#include <iostream>

int main()
{
    char inputChar;
    int asciiValue;

    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    asciiValue = (int)inputChar;

    std::cout << "The ASCII value of " << inputChar << " is " << asciiValue << std::endl;

    std::cout << 'a' + 1 << std::endl;
    std::cout << (char)('a' + 1) << std::endl;

    return 0;

}