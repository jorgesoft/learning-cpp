#include <iostream>

const int DAYS_IN_A_WEEK =7;
int main()
{
    int daysTraveled, weeks, daysExtra;

    std::cout << "Number of days traveled: ";
    std::cin >> daysTraveled;

    weeks = daysTraveled / DAYS_IN_A_WEEK;
    daysExtra = daysTraveled % DAYS_IN_A_WEEK;

    std::cout << "Total traveled: " << weeks << " weeks, " << daysExtra << " days." <<std::endl;
    return 0;
};