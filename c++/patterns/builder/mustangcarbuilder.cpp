#include "mustangcarbuilder.h"

MustangCarBuilder::MustangeCarBuilder() {}

MustangCarBuilder::Paint() 
{
    m_car->setColor("yellow");
}

MustangCarBuilder::mountGear() 
{
    m_car->setGear(7);
}

MustangCarBuilder::setHp() 
{
    m_car->setHp(600);
}

