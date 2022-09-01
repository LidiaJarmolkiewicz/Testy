#include "pch.h"
#include "../TaxCalculator/TaxCalculator.hpp"



TEST(TestTaxCalculator, incomeEqualZero) {
	TaxCalculator tax;

	EXPECT_EQ(tax.getTax(0), 0);

}

TEST(TestTaxCalculator, incomeInTreshold1) {
	TaxCalculator tax;

	EXPECT_EQ(tax.getTax(9999), 0);

}

TEST(TestTaxCalculator, incomeInTreshold2Plus1) {
	TaxCalculator tax;

	EXPECT_EQ(tax.getTax(10001), 0.1);

}

TEST(TestTaxCalculator, incomeInTreshold2Plus29999) {
	TaxCalculator tax;

	EXPECT_EQ(tax.getTax(29999),1999.90);

}

TEST(TestTaxCalculator, incomeInTreshold4) {
	TaxCalculator tax;

	EXPECT_EQ(tax.getTax(131234), 28993.6);

}