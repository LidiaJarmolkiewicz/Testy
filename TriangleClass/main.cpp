#include <iostream>
#include"Triangle.hpp"
#include<cmath>

int main()
{
    Triangle triangle1(3,4,5);
   
    std::cout<<"czy trojkat poprawny? -" << std::boolalpha << triangle1.isValid() << std::endl;
    std::cout << "obwod =" << triangle1.getPerimeter() << std::endl;
    std::cout << "pole =" << triangle1.getArea() << std::endl;
}