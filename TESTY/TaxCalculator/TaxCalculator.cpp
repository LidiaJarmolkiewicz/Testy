#include "TaxCalculator.hpp"
#include<iostream>

double TaxCalculator::getTax(double income)
{
	
	if (getTreshold1(income))
	{
		return 0;
	}
	else if (getTreshold2(income))
	{
		return ((income - treshold1) * tax1);
	}
	else if (getTreshold3(income))
	{
		return ((treshold2 - treshold1) * tax1) + ((income-treshold2)*tax2);
	}
	else if (getTreshold4(income))
	{
		return ((treshold2 - treshold1) * tax1) + ((treshold3 - treshold2) * tax2) + ((income - treshold3) * tax3);
	}
	else
	{
		std::cout << "kwota przychodu powinna byc >= zero";
	}
}

bool TaxCalculator::getTreshold1(double income)
{
	int treshold1 = 10000;
	return (income >= 0 && income <= treshold1);
}

bool TaxCalculator::getTreshold2(double income)
{
	int treshold1=10000;
	int treshold2=30000;
	return (income > treshold1 && income <= treshold2);
}

bool TaxCalculator::getTreshold3(double income)
{
	int treshold2=30000;
	int treshold3=120000;
	return (income > treshold2 && income <= treshold3);
}


bool TaxCalculator::getTreshold4(double income)
{
	int treshold3=120000;
	return (income > treshold3);
}

