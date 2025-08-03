#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int somaTotal = 0;


    printf("Soma da sequencia de n numeros\n");
    printf("Digite o valor de n: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        somaTotal += i;
    }

    printf("A soma da sequencia de %d e %d", num, somaTotal);

    system("pause >> NULL");

    return 0;
}