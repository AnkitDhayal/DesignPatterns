#include "Ship.h"
#include "Car.h"

class CarAdaptor : public Ship{
    private :
      Car car;

    public :
      void floating() override;
      

};