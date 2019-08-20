#include "carbuilder.h"

class CarAssembler
{
public:

    void printProperties()
    {
        m_carBuilder->getCar()->getProperties();
    }

    
    void createCar(CarBuilder* cb)
    {
        m_carBuilder = cb;
        m_carBuilder->Paint();
        m_carBuilder->mountGear();
        m_carBuilder->setHp();
    }
private:
    CarBuilder* m_carBuilder;

};