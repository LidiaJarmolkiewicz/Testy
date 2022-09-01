#pragma once
class TaxCalculator
{
public:
	double tax1 = 0.1;
	double tax2 = 0.25;
	double tax3 = 0.4;
	int treshold1 = 10000;
	int treshold2 = 30000;
	int treshold3 = 120000;

	bool getTreshold1(double income);
	bool getTreshold2(double income);
	bool getTreshold3(double income);
	bool getTreshold4(double income);

	double getTax(double income);


	
	
};

