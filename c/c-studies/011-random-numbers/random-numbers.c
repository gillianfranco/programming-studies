#include <stdio.h>
#include <time.h> // Biblioteca da função time()
#include <stdlib.h> // Biblioteca das funções rand() e srand()

int main(){
    int segundos = time(0); // Epoch
    srand(segundos);

    int numAleatorio = rand() % 11; // Gera um número de 0 a 10

    printf("%d\n", numAleatorio);

    return 0;
}