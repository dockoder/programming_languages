 #include <string>
 #include "dog.h"
 #include "fish.h"

 
using namespace std;

 
 class AnimalFactory
 {
 public:
     static unique_ptr<Animal> createAnimal(const std::string &description)
     {
         if(description == "dog")
             return new Dog;
         if(description == "fish")
             return new Fish;
         return nullptr;
     }
 };