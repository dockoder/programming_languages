#include <string>
#include <iostream>
#include <memory>

#include "AnimalFactory.h"


using namespace std;

void animal_getInfo(const string &descriptionring )
{
    unique_ptr<Animal> animal = AnimalFactory::createAnimal(descriptionring);
    animal->move();
}
 

int main() {

    animal_getInfo("dog");
    animal_getInfo("fish");
    
};
