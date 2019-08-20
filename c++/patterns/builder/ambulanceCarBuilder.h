#include "carbuilder.h"

class AmbulanceCarBuilder : public CarBuilder
{
public:
    virtual ~AmbulanceCarBuilder() {}

    virtual void Paint();

    virtual void mountGear();
    
    virtual void setHp();
};