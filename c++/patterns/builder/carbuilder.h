#include "car.h"


//Abstract class
class CarBuilder
{
public:
    virtual ~CarBuilder() {};

    Car* getCar()
    {
        return m_car.make();
    }

    void createNewCarType()
    {
        m_car = make_unique<Car>();
    }

    virtual void Paint() =  0;
    virtual void mountGear() = 0;
    virtual void setHp() = 0;
protected:
    unique_ptr<Car> m_car;

}
