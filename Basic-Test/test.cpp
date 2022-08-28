#include "pch.h"
#include"../Basic/Calculator.hpp"

TEST(CalculatorTest, Sum2Plus2Iqual4) {
	Calculator calc;
	EXPECT_EQ(calc.sum(2, 2), 4);
	//EXPECT_TRUE(true);
}
