#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, cont, mult;
    printf("Miltiplos de i e j\n");

    printf("Digite o tamanho da sequencia de numeros: ");
    scanf("%d", &n);

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    cont = 0;
    mult = 0;

    while(cont < n){
        if(mult%i == 0 || mult%j == 0){
            printf("%d ", mult);
            cont++;
        }
        mult++;
    }

    system("pause >> NULL");
    return 0;
}