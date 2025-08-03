#include <iostream>
#include "brazil-cities.h"

using namespace std;

int main(){
    cout << "Uberlandia: " << endl;
    brazilcities Uberlandia(700000, 1818);
    cout << "Populacao: " << Uberlandia.getPopulation() << endl;
    cout << "Ano de fundacao: " << Uberlandia.getFoundationYear() << endl;

    system("pause >> NULL");

    return 0;
}