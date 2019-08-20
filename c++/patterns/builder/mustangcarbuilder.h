#include "carbuilder.h"

class MustangCarBuilder : public CarBuilder
{
public:
    virtual ~MustangeCarBuilder() {}

    virtual void Paint();

    virtual void mountGear();
    
    virtual void setHp();