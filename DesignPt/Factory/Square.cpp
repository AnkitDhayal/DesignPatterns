#include "Square.h"

Square::Square(double side) : mSide(side)
{

}

Square Square::make1(double side)
{
    return Square(side);
}


double Square::side()
{
    return mSide;
}

double Square::area(){
    double SquareArea = mSide*mSide;
    return SquareArea;
}

double Square::perimeter(){
    double SquarePerimeter = 4 * mSide;
    return SquarePerimeter;
}