#include "carbuilder.h"

class CarAssembler
{
public:

    void printProperties();
    
    void createCar(CarBuilder* cb);

private:
    
    CarBuilder* m_carBuilder;

};