#include "pch.h"
#include "../Converter/Converter.hpp"

TEST(TestConverterTemeratur, CelciusToFarenheitConvert0) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertCelsjuszToFarenheit(0), 32);
}

TEST(TestConverterTemeratur, CelciusToFarenheit_positive) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertCelsjuszToFarenheit(40), 104);
}
TEST(TestConverterTemeratur, CelciusToFarenheit_negative) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertCelsjuszToFarenheit(-15), 5);
}
TEST(TestConverterTemeratur, CelciusToFarenheit_fraction) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertCelsjuszToFarenheit(37.6), 99.68);
	EXPECT_DOUBLE_EQ(converter.convertCelsjuszToFarenheit(-10.5), 13.1);
}
TEST(TestConverterTemeratur, FarenheitToCelsjuszConvert0) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertFarenheitToCelsjusz(0), -17.78);
}

TEST(TestConverterTemeratur, FarenheitToCelsjuszPositive) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertFarenheitToCelsjusz(18), -7.78);
}
TEST(TestConverterTemeratur, FarenheitToCelsjuszNegative) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertFarenheitToCelsjusz(-20), -28.89);
}
TEST(TestConverterTemeratur, FarenheitToCelsjuszFraction) {

	Converter converter;

	EXPECT_DOUBLE_EQ(converter.convertFarenheitToCelsjusz(12.50), -10.83);
	EXPECT_DOUBLE_EQ(converter.convertFarenheitToCelsjusz(-48.8), -44.89);

}
TEST(TestConverterMeters, MeterToFeet_convertZero)
	{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertMetrToFeet(0), 0);

	}
TEST(TestConverterMeters, MeterToFeet_positive)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertMetrToFeet(10), 32.80);

}
TEST(TestConverterMeters, MeterToFeet_Fraction)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertMetrToFeet(10.5), 34.45);

}
TEST(TestConverterMeters, FeetToMeteresPositive)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertFeetToMeter(7), 2.13);
}

TEST(TestConverterMeters, FeetToMeteresFraction)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertFeetToMeter(2.7), 0.82);


}