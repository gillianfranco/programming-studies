// #include <stdio.h>
// #include <stdlib.h>

#include <iostream>
using namespace std;

int fatorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main(){
    int n, res;

    cout << "Digite um número inteiro positivo: ";
    do{
        cin >> n;
        if(n < 0)
            cout << "Numero invalido! Digite um numero inteiro positivo: ";
    }while(n < 0);

    res = fatorial(n);

    cout << "O resultado e' " << res << "." << endl;

    return 0;
}