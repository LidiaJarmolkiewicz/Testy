

#include <iostream>
#include"Triangle.hpp"

Triangle::Triangle()
{
}

int Triangle::getSideA()
{
    return _a;
}

int Triangle::getSideB()
{
    return _b;
}

int Triangle::getSideC()
{
    return _c;
}

float Triangle::getArea()
{
    float area;
    int p;
    if (isValid() == true)
    {
        p = (_a + _b + _c) / 2;
        area = sqrt(p * (p - _a) * (p - _b) * (p - _c));
        return area;
    }
    else
    {
        return 0;
    }
    
}

int Triangle::getPerimeter()
{
    int perimeter;
    if (isValid() == true)
    {
        return perimeter = _a + _b + _c;
    }
    else
    {
        return 0;
    }
    
}

bool Triangle::isValid()
{
    if ((_a + _b) > _c && (_b + _c) > _a && (_a + _c) > _b)
    {
        return true;
        std::cout << "trojkat jest poprawny";
    }
    else
    {
        return false;
        std::cout << "trojkat nie jest poprawny";
    }
    
}
