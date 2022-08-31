#include"Converter.hpp"
double Converter::convertMetrToFeet(double _m)
{
    return _m * feetToMeterFactor;
}

double Converter::convertFeetToMeter(double _f)
{
    return _f / feetToMeterFactor;
}

double Converter::convertCelsjuszToFarenheit(double _gc)
{
    return _gc * 9 / 5 + 32;
}

double Converter::convertFarenheitToCelsjusz(double _gf)
{
    return  (_gf - 32) * 5 / 9;;
}
