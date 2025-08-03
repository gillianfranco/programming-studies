#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, eprimo, divisor;
    printf("Verificacao de numero primo.\n");
    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num <= 1){
        eprimo = 0;
    }else{
        eprimo = 1;
    }

    divisor = 2;
    
    while(divisor <= num/2 && eprimo == 1){
        if(num % divisor == 0){
            eprimo = 0;
        }
        divisor++;
    }

    printf("O inteiro %d ", num);
    if(eprimo == 1){
        printf("e' um numero primo.");
    }else{
        printf("nao e' um numero primo.");
    }
    
    system("pause >> NULL");
    return 0;
}