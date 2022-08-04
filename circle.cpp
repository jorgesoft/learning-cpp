#include <iostream>
#include <cmath>

int main()
{
    double radius, area;

    std::cout << "Please enter the radius: ";
    std::cin >> radius;

    area = M_PI * (radius*radius);

    std::cout << "The area of the circle with radius of " << radius << " is " << area <<std::endl;
    return 0;
};