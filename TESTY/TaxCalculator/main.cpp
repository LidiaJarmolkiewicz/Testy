
#include <iostream>
#include "TaxCalculator.hpp"

int main()
{
    TaxCalculator tax;
    std::cout<<"podatek wynosi= " << tax.getTax(37500) << std::endl;

   
}
