#include <string>
#include <iostream>
#include <memory>
#include "carbuilder.h"
#include "mustangcarbuilder.h"
#include "ambulanceCarBuilder.h"
#include "carassembler.h"

using namespace std;



int main() {

    CarAssembler assembler;


    MustangCarBuilder* mustangCarBuilder;
    AmbulanceCarBuilder* ambulanceCarBuilder;

    assembler.createCar(mustangCarBuilder);
    assembler.printProperties();

    assembler.createCar(ambulanceCarBuilder);
    assembler.printProperties();


}