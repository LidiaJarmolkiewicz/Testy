#include "pch.h"
#include"../TriangleClass/Triangle.hpp"

TEST(TestTriangle, TestSidePositive) {
	Triangle triangle(3,4,5);
  
  EXPECT_GT(triangle.getSideA(), 0);
  EXPECT_GT(triangle.getSideB(), 0);
  EXPECT_GT(triangle.getSideC(), 0);
}

TEST(TestTriangle, TestPerimeter) {
	Triangle triangle(3, 4, 5);
	
	EXPECT_EQ(triangle.getPerimeter(),12);
}
TEST(TestTriangle, TestArea) {
	Triangle triangle(3, 4, 5);

	EXPECT_EQ(triangle.getArea(), 6);
}