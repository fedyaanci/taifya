#define _USE_MATH_DEFINES

#include <iostream>
#include <numbers>
#include <iomanip>
#include <stdexcept>

double ReadRadius()
{
    double radius;

    std::cout << "Input radius: " << std::endl;

    if (std::cin >> radius)
    {
        if (radius > 0)
        {
            return radius;
        }
        else
        {
            throw std::domain_error("radius must > 0");
        }
    }
    else
    {
        throw std::invalid_argument("input number");
    }
}

double GetSquare(double radius)
{
    return M_PI * std::pow(radius, 2);
}

void ProcessAndOutput()
{
    double radius;
    try
    {
        radius = ReadRadius();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        std::exit(1);
    }
    double square{ GetSquare(radius) };

    std::cout << std::fixed << std::setprecision(3) << square << std::endl;

}

int main()
{
    ProcessAndOutput();
}
