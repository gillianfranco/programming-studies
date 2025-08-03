#include <stdio.h>
#include <stdlib.h>
// Examples of perfect numbers: 6, 28 e 496
int main(){
    int num, soma, i;
    printf("Digite um numero: ");
    scanf("%d", &num);

    soma = 0;

    for(i = 1; i < num; i++){
        if(num % i == 0){
            soma += i;
        }
    }

    if(soma == num){
        printf("O numero %d e' um numero perfeito!", num);
    }else{
        printf("O numero %d nao e' um numero perfeito!", num);
    }

    system("pause >> NULL");
    return 0;
}