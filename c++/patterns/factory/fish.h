#include <iostream>
#include "animal.h"

using namespace std;

class Fish : public Animal
{
public:

     void setLegs(int legs) {mLegs = 0;};

     void setFur(bool hasFur) {mHasFur = false;};

     void move() {cout<<"Fish is moving";};

     virtual ~Fish() {};

private:
    int mLegs;
    bool mHasFur;
};