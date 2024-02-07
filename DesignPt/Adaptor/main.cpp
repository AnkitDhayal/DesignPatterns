#include "CarAdaptor.h"
#include "Car.h"
#include "Ship.h"
#include "Client.h"

int main()
{
    CarAdaptor carAdaptor;
    Client client;
    client.clientCode(carAdaptor);
    return 0;
}