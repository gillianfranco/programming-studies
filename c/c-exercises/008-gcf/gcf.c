#include <stdio.h>
#include <stdlib.h>

int main(){
    int anterior, atual, resto;
    printf("Máximo divisor comum entre dois numeros.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &anterior);
    printf("Digite o segundo numero: ");
    scanf("%d", &atual);

    resto = atual % anterior;

    while(resto != 0){
        resto = anterior % atual;
        anterior = atual;
        atual = resto;
    }

    printf("%d", anterior);

    system("pause >> NULL");
    return 0;
}