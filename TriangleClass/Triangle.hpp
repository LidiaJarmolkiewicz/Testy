#pragma once
#include<cmath>
class Triangle
{
public:
	Triangle(int a,int b, int c):_a(a),_b(b),_c(c){
	};
	Triangle();
	int getSideA();
	float getArea();
	int getPerimeter();
	bool isValid();
private:
	int _a;
	int _b;
	int _c;
};

