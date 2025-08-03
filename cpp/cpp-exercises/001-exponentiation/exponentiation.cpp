#include <iostream>
using namespace std;

void escreva(string texto){
    cout << texto;
}

void calculaPotencia(int base, int expoente){
    int i = 1;
    int res = 1;

    if(expoente == 0){
        escreva("\nO resultado e' 1.\n");
    }else{
        while(i <= expoente){
            res *= base;
            i++;
        }
        escreva("\nO resultado e' ");
        cout << res << ".\n";
    }
}

int main(){
    int base, expoente, continuar;

    do{
        escreva("Digite a base da potencia: ");
        cin >> base;
        escreva("\nDigite o valor do expoente: ");
        cin >> expoente;
        calculaPotencia(base, expoente);


        escreva("Deseja calcular outra potencia? (Digite 1 para SIM | Digite 0 para NAO)");
        do{
            cin >> continuar;
            if(continuar != 0 && continuar != 1){
                escreva("Numero invalido! Digite 1 para SIM | Digite 0 para NAO: ");
            }
        }while(continuar != 0 && continuar != 1);
    }while(continuar == 1);
    
    return 0;
}