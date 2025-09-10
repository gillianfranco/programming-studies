#include <stdio.h>
#include <locale.h>

void clearBuffer(){
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n, i;
    char c;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    clearBuffer();

    printf("Digite um caractere: ");
    scanf(" %c", &c);
    clearBuffer();

    printf("Quantas vezes você deseja incrementar o número e o caractere? ");
    scanf("%d", &i);
    clearBuffer();

    for(int cont = 0; cont < i; cont++){
        n++;
        c++;
    }

    printf("\nApós incrementar %d veze(s), o valor inteiro passou a valer %d e o caractere passou a ser %c.\n", i, n, c);

    return 0;
}
