#pragma once
#include "Body.h"
#include "CarEngine.h"
#include "Interior.h"

class CarShowroom
{
    public :
      void manufacture();

      private:
      CarEngine engine;
      Interior carInterior;
      Body carBody;
};