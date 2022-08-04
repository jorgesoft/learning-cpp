#include <iostream>

int main()
{
    bool b1, b2, b3, b4;

    b1 = true;
    b2 = !b1;
    b3 = b1 && b2;
    b4 = b1 || b2;

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    std::cout << b4 << std::endl;

    return 0;
}