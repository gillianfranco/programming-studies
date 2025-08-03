#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;
    int quadrado;

    printf("Calculo dos quadrados de uma sequencia de numeros\n");

    while(num != 0){
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        quadrado = num * num;
        printf("O quadrado do numero %d e' %d\n", num, quadrado);
    }

    system("pause >> NULL");

    return 0;
}