#include "Shape.h"
#pragma once

class Circle : protected Shape
{
public:
    double radius();

protected:
    static Circle make(double inRadius);

private:
    Circle(double inRadius);

private:
    double mRadius;   
};