#include "ambulanceCarBuilder.h"

AmbulanceCarBuilder::~AmbulanceCarBuilder() {}

AmbulanceCarBuilder::Paint()
{
    m_car->setColor("white");
}

AmbulanceCarBuilder::mountGear()
{
    m_car->setGear(6);
}
    
AmbulanceCarBuilder::setHp()
{
    m_car->setHp(150);
}
