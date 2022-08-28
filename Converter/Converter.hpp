#pragma once
class Converter
{public:
		
	double convertMetrToFeet(double _m);
	double convertFeetToMeter(double _f);
	double convertCelsjuszToFarenheit(double _gc);
	double convertFarenheitToCelsjusz(double _gf);
private:
	const double feetToMeterFactor = 3.281;
	
};

