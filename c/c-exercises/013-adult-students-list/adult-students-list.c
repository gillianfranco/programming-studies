#include <stdio.h>
#include <string.h>
#include <locale.h>

#define QTDE_ALUNOS 4
#define MAX_CHAR_NOME 50

void clearBuffer();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char nomes[QTDE_ALUNOS][MAX_CHAR_NOME];
    int idades[QTDE_ALUNOS];

    for(int i = 0; i < QTDE_ALUNOS; i++){
        printf("=== Dados Aluno %d ===\n", i + 1);

        printf("Nome: ");
        fgets(nomes[i], MAX_CHAR_NOME + 1, stdin);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("\n");

        clearBuffer();
    }

    printf("=== Alunos maiores de idade ===\n");

    for(int i = 0; i < QTDE_ALUNOS; i++){
        if(idades[i] >= 18){
            printf("%d - %s", i + 1, nomes[i]);
        }
    }
    
    return 0;
}

void clearBuffer(){
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}
