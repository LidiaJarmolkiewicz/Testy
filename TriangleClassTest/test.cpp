#include "pch.h"
#include"../TriangleClass/Triangle.hpp"

TEST(TestTriangle, TestSidePositive) {
	Triangle triangle(3,4,5);
  
  EXPECT_GT(triangle.getSideA(), 0);
  EXPECT_GT(triangle.getSideB(), 0);
  EXPECT_GT(triangle.getSideC(), 0);
}

TEST(TestTriangle, getPerimeterValidTriange) {
	Triangle triangle(3, 4, 5);
	
	EXPECT_EQ(triangle.getPerimeter(),12);
}

TEST(TestTriangle, getPerimeterInValidTriange) {
	Triangle triangle(1,2,4);

	EXPECT_EQ(triangle.getPerimeter(), 0);
}


TEST(TestAreaTriangle,getAreaValidTriange) {
	Triangle triangle(3, 4, 5);

	EXPECT_FLOAT_EQ(triangle.getArea(), 6);
}
TEST(TestAreaTriangle, getAreaInValidTriange) {//dla parametrow 1,2,3 grozi bledem testowania bo zwraca 0 przypadkowo trafilismy w dobre wartosci
	Triangle triangle(1,2,3);

	EXPECT_FLOAT_EQ(triangle.getArea(), 0);
}

TEST(TestValidityTest, IsValidTriange_returnTrue) {
	Triangle triangle(3,4,5);

	EXPECT_TRUE(triangle.isValid());
}

TEST(TestValidityTest, IsInValidTriange_returnFalse) {
	Triangle triangle(1, 2, 3);

	EXPECT_FALSE(triangle.isValid());
}
