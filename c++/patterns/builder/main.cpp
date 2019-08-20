#include <string>
#include <iostream>
#include <memory>
#include "carbuilder.h"
#include "mustangcarbuilder.h"

using namespace std;

class AmbulanceCarBuilder : public CarBuilder
{
public:
    virtual ~AmbulanceCarBuilder() {}

    virtual void Paint()
    {
        m_car->setColor("white");
    }

    virtual void mountGear()
    {
        m_car->setGear(6);
    }
    
    virtual void setHp()
    {
        m_car->setHp(150);
    }
};

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

int main() {

    CarAssembler assembler;


    MustangCarBuilder* mustangCarBuilder;
    AmbulanceCarBuilder* ambulanceCarBuilder;

    assembler.createCar(mustangCarBuilder);
    assembler.printProperties();

    assembler.createCar(ambulanceCarBuilder);
    assembler.printProperties();


}