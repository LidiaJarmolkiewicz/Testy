
#include <iostream>
#include"Calculator.hpp"

int main()
{
    Calculator calc;

    std::cout << "suma = " << calc.sum(1, 4) << std::endl;
    std::cout << "pierwiastek = " << calc.square(9) << std::endl;
}

