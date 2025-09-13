#include <stdio.h>
#include <locale.h>

void clearBuffer();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char titulos[3][100];
    char autores[3][50];
    int anosDasPublicacoes[3];

    for(int i = 0; i < 3; i++){
        printf("=== Dados do Livro %d ===\n", i + 1);

        printf("Digite o título: ");
        gets(titulos[i], 100);

        printf("Digite o nome do autor: ");
        gets(autores[i], 50);

        printf("Digite o ano de publicação: ");
        scanf("%d", &anosDasPublicacoes[i]);

        clearBuffer();

        printf("\n");
    }

    printf("====== Livros Registrados ======\n");

    for(int i = 0; i < 3; i++){
        printf("%s\n%s\n%d\n\n", titulos[i], autores[i], anosDasPublicacoes[i]);
    }
    
    return 0;
}

void clearBuffer(){
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}
