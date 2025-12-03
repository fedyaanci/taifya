#include <iostream>
#include <math.h>

int Factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    
    return number * Factorial(number - 1);
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << Factorial(num) << std::endl;
}
