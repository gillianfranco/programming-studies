#include <iostream>
#include "brazil-cities.h"

using namespace std;

brazilcities::brazilcities(int population=0, int foundationYear=0){
    this->population = population;
    this->foundationYear = foundationYear;
}

int brazilcities::getPopulation(){
    return population;
}

int brazilcities::getFoundationYear(){
    return foundationYear;
}