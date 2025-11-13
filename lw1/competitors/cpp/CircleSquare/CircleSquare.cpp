#define _USE_MATH_DEFINES

#include <iostream>
#include <numbers>
#include <iomanip>

int main()
{
    int radius;
    std::cin >> radius;

    double square{ M_PI * radius * radius };

    std::cout << std::fixed << std::setprecision(3)<<square<<std::endl;
}
