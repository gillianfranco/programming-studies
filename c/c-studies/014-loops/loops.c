#include <stdio.h>

int main(){
    // While
    int cont = 0;

    printf("While --> |");

    while (cont <= 10){
        if(cont != 10){
            printf(" %d -", cont);
        } else{
            printf(" %d |\n\n", cont);
        }
        
        cont++;
    }

    // For
    printf("For --> |");

    for(int i = 10; i <= 20; i++){
        if(i != 20){
            printf(" %d -", i);
        } else{
            printf(" %d |\n\n", i);
        }
    }

    // Varredura de um array

    int numeros[] = {10, 59, 17, 11, 5};
    cont = 0;

    while(cont <= (int)(sizeof(numeros) / sizeof(int))){
        if(numeros[cont] == 17){
            printf("Encontrado na posição %d.\n\n", cont);
        }
        cont++;
    }

    // Continue

    int acumulador = 0;

    for(int i = 0; i <= 10; i++){
        if(i == 5){
            continue;
        }

        acumulador += i;
    }

    printf("Acumulado: %d\n", acumulador);

    return 0;
}