#include "Factory.h"

Circle Factory::getCircle(double inRadius)
{
    return Circle::make(inRadius);
}


Square Factory::getSquare(double side)
{
    return Square::make1(side);
}

