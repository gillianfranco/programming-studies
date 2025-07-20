#include <stdio.h>

int main(){

    char nome[100];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", nome); // Somente para strings não é necessário adicionar &
    printf("Seu nome é %s\n\n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é %d\n\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é %.2f\n", altura);

    return 0;
}