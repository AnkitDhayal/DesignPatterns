#include<iostream>
#include "Factory.h"

int main()
{
    Circle circle = Factory::getCircle(5.0);
    Square square = Factory::getSquare(10.0);

    std::cout<<circle.radius()<<std::endl;
    std::cout<<square.area()<<std::endl;
     std::cout<<square.perimeter()<<std::endl;

    return 0;
}