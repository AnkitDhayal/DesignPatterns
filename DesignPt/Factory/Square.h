#include "Shape.h"
#pragma once

class Square : public Shape
{
public:
    double side();
    double area() override ; 
    double perimeter() override ;
   

protected:
    static Square make1(double side);
   

private:
    Square(double side);

private:
    double mSide;
       
};