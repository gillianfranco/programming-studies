#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Armazena as opções de tipos de componentes
// enum tipo_componente
// {
//     CAPACITOR,
//     RESISTOR,
//     INDUTOR,
//     BATERIA
// };

// Estrutura para armazenar os dados de cada componente
typedef struct
{
    char nome[50];
    int valor;
    char tipo[20];
} Componente;

void clearBuffer();
void inserir_componente(Componente *x);
void listar_componentes(Componente *lista, int tamanho_lista);
void gerar_arquivo(FILE *file, Componente *lista, int tamanho_lista);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int opcao, tamanho_lista;
    Componente *lista_componentes = NULL;
    FILE *file;

    tamanho_lista = 0;
    do
    {
        printf("========== Componentes Eletrônicos ==========\n\n");

        printf("Digite apenas o número da opção desejada:\n");
        printf("0 - Sair\t1 - Inserir Componente\t2 - Listar Componentes\t3 - Gerar Arquivo CSV\n>> ");
        scanf("%d", &opcao);

        while (opcao < 0 || opcao > 3)
        {
            printf("\nOpção inválida, tente novamente: ");
            scanf("%d", &opcao);
        }

        switch (opcao) {
        case 0:
            printf("\nSaindo do programa...\n");
            break;
        case 1:
            Componente *temp = calloc(1, sizeof(*temp));
            inserir_componente(temp);
            lista_componentes = realloc(lista_componentes, (tamanho_lista + 1) * sizeof(Componente));
            lista_componentes[tamanho_lista] = *temp;
            free(temp);
            tamanho_lista += 1;
            break;
        case 2:
            if (lista_componentes) {
                listar_componentes(lista_componentes, tamanho_lista);
            } else {
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Não há nenhum elemento na lista de componentes ainda!\n\n");
            }
            break;
        case 3:
            if (lista_componentes) {
                gerar_arquivo(file, lista_componentes, tamanho_lista);
            } else {
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Não há nenhum elemento na lista de componentes ainda!\n\n");
            }
            break;
        }

    } while (opcao != 0);

    return 0;
}

void clearBuffer() {
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}

void inserir_componente(Componente *x) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Digite o nome do componente: ");
    scanf("%s", x->nome);

    clearBuffer();

    printf("Digite o valor do componente: ");
    scanf("%d", &x->valor);

    clearBuffer();

    printf("Digite o tipo do componente: ");
    scanf("%s", x->tipo);

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Componente registrado!\n\n");
}

void listar_componentes(Componente *lista, int tamanho_lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Lista de componentes:\n");
    
    for (int i = 0; i < tamanho_lista; i++) {
        printf("%d - %s; %d; %s.\n", i + 1, lista[i].nome, lista[i].valor, lista[i].tipo);
    }

    printf("\n");
}

void gerar_arquivo(FILE *file, Componente *lista, int tamanho_lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    file = fopen("../lista-componentes.csv", "w");

    if (file == NULL) {
        printf("Erro ao criar o arquivo!\n\n");
        exit(1);
    }

    for (int i = 0; i < tamanho_lista; i++) {
        fprintf(file, "%s; %d; %s\n", lista[i].nome, lista[i].valor, lista[i].tipo);
    }

    fclose(file);

    printf("Arquivo criado com sucesso!\n\n");
}
