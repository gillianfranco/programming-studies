#include <iostream>
using namespace std;

int main(){
    int *age1 = new int;
    int *age2 = new int;
    int *average = new int;

    cout << "Type the first age: ";
    cin >> *age1;

    cout << "Type the second age: ";
    cin >> *age2;

    *average = (*age1 + *age2) / 2;

    cout << "\nThe result is " << *average << ".\n";

    return 0;
}