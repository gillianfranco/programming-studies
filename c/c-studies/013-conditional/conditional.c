#include <stdio.h>

int main(){
    int num1 = 17, num2 = 19, day = 4, age = 19;

    // Condicional Simples
    if (num1 > num2){
        printf("%d é maior que %d\n\n", num1, num2);
    }

    // Condicional Composta
    if (num1 > num2){
        printf("%d é maior que %d\n\n", num1, num2);
    } else{
        printf("%d é maior que %d\n\n", num2, num1);
    }

    // Condicionais de múltipla escolha
    if (num1 > num2){
        printf("%d é maior que %d\n\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d é maior que %d\n\n", num2, num1);
    } else if (num1 == num2){
        printf("%d é igual a %d\n\n", num1, num2);
    } else{
        printf("Erro\n\n");
    }

    switch(day){
        case 1:
            printf("Hoje é domingo!\n\n");
            break;
        case 2:
            printf("Hoje é segunda!\n\n");
            break;
        case 3:
            printf("Hoje é terça!\n\n");
            break;
        case 4:
            printf("Hoje é quarta!\n\n");
            break;
        case 5:
            printf("Hoje é quinta!\n\n");
            break;
        case 6:
            printf("Hoje é sexta!\n\n");
            break;
        case 7:
            printf("Hoje é sábado!\n\n");
            break;
        default:
            printf("Erro\n\n");
            break;
    }

    // Operador Ternário
    (age < 18) ? printf("Você é menor de idade!\n") : printf("Você é maior de idade!\n");


    return 0;
}