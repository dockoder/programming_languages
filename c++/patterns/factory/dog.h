#include <iostream>
#include "animal.h"

using namespace std;

class Dog : public Animal
{
public:

     void setLegs(int legs) {mLegs = legs<5?legs:4;};

     void setFur(bool hasFur) {mHasFur = hasFur;};

     void move() {cout<<"Dog is moving";};

     Dog() {mLegs = 4;}

     virtual ~Dog() {};

private:
    int mLegs;
    bool mHasFur;
};