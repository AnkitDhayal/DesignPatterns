#include "Circle.h"
#include "Square.h"
#pragma once

class Factory : protected Square ,Circle
{
    public:
        static Circle getCircle(double inRadius);
           static Square getSquare(double side);
          

};

