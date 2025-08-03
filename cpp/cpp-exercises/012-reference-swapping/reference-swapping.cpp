#include <iostream>
using namespace std;

void changeAddress(int* &ptr1, int* &ptr2){
    int oldAddress;
    oldAddress = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = oldAddress;
}

int main(){
    int *ptr1 = new int;
    int *ptr2 = new int;
    *ptr1 = 10;
    *ptr2 = 7;

    cout << "Before: ptr1 = " << ptr1 << " -> " << *ptr1 << "; ptr2 = " << ptr2 << " -> " << *ptr2 << ";\n";

    changeAddress(ptr1, ptr2);

    cout << "After: ptr1 = " << ptr1 << " -> " << *ptr1 << "; ptr2 = " << ptr2 << " -> " << *ptr2 << ";\n";

    return 0;
}