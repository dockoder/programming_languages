#include "carassembler.h"

CarAssembler::printProperties()
{
    m_carBuilder->getCar()->getProperties();
}

    
CarAssembler::createCar(CarBuilder* cb)
{
    m_carBuilder = cb;
    m_carBuilder->Paint();
    m_carBuilder->mountGear();
    m_carBuilder->setHp();
}