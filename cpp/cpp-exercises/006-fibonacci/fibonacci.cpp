#include <iostream>
using namespace std;

int fibonacci(int n){
    int fant, fatual, fprox, i;
    i = 1;
    fant = 0;
    fatual = 1;

    while(i < n){
        fprox = fatual + fant;
        fant = fatual;
        fatual = fprox;
        i++;
    }

    return fatual;
}

int main(){
    int num, res;

    cout << "Enter a natural number: ";
    cin >> num;

    res = fibonacci(num);

    cout << "The Fibonacci sequence element at position " << num << " is " << res << endl;

    return 0;
}