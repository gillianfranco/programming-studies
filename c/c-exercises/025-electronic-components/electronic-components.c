#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Estrutura para armazenar os dados de cada componente
typedef struct
{
    char nome[50];
    int valor;
    char tipo[20];
} Componente;

// Nó da lista encadeada
typedef struct No {
    Componente dado;
    struct No *prox;
} No;

// Protótipos das funções
void clearBuffer();
void inserir_componente(Componente *x);
void inserir_no_fim(No **lista, Componente x);
void listar_componentes(No *lista);
void gerar_arquivo(FILE *file, No *lista);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, tamanho_lista;
    No *lista_componentes = NULL; // Ponteiro para o primeiro nó da lista de componentes
    FILE *file = NULL; // Ponteiro para apontar ao arquivo onde os dados serão salvos

    tamanho_lista = 0;

    // Executa pelo menos uma vez e depois será executado enquanto a opção escolhida pelo usuário for diferente de 0 (Sair)
    do {
        printf("========== Componentes Eletrônicos ==========\n");
        
        // Solicita que o usuário escolha uma das opções
        printf("Digite apenas o número da opção desejada:\n");
        printf("0 - Sair\t1 - Inserir Componente\t2 - Listar Componentes\t3 - Gerar Arquivo CSV\n>> ");
        scanf("%d", &opcao);

        // Verifica se a escolha do usuário é válida
        while (opcao < 0 || opcao > 3)
        {
            printf("\nOpção inválida, tente novamente: ");
            scanf("%d", &opcao);
        }

        // Executa um bloco dependendo da escolha do usuário
        switch (opcao) {
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            case 1:
                Componente *temp = calloc(1, sizeof(*temp)); // Aloca a estrutura `Componente` temporariamente
                inserir_componente(temp); // Solicita que o usuário preencha os dados do componente
                inserir_no_fim(&lista_componentes, *temp); // Copia a estrutura temporária para o fim da lista de componentes
                free(temp); // Limpa a estrutura temporária
                tamanho_lista += 1; // Soma mais 1 componente ao tamanho da lista de componentes
                break;

            case 2:
                if (lista_componentes) { // Verifica se a lista de componentes está com algum componente registrado
                    listar_componentes(lista_componentes); // Lista os componentes da lista
                } else {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Não há nenhum elemento na lista de componentes ainda!\n\n");
                }
                break;
            case 3:
                if (lista_componentes) { // Verifica se a lista de componentes está com algum componente registrado
                    gerar_arquivo(file, lista_componentes); // Cria o arquivo CSV e escreve a lista de componentes nele
                } else {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Não há nenhum elemento na lista de componentes ainda!\n\n");
                }
                break;
        }

    } while (opcao != 0);

    return 0;
}

// Limpa o buffer do teclado
void clearBuffer() {
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}

// Coleta os dados de um novo componente
void inserir_componente(Componente *x) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    // Solicita os dados do componente ao usuário e registra na estrutura `Componente`
    printf("Digite o nome do componente: ");
    scanf("%49s", x->nome);
    clearBuffer();
    printf("Digite o valor do componente: ");
    scanf("%d", &x->valor);
    clearBuffer();
    printf("Digite o tipo do componente: ");
    scanf("%19s", x->tipo);

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Componente registrado!\n\n");
}

// Adiciona um componente no fim da lista de componentes
void inserir_no_fim(No **lista, Componente x) {
    No *novo = malloc(sizeof(*novo)); // Aloca um novo nó
    novo->dado = x; // Adiciona o novo componente
    novo->prox = NULL; 

    if (*lista == NULL) { // Se a lista estiver vazia, o novo nó é adicionado sem precisar atualizar o ponteiro `prox` de um eventual nó anterior
        *lista = novo;
        return;
    }

    No *atual = *lista; // Recebe o primeiro nó da lista
    while (atual->prox != NULL) { // Finaliza quando se chegar no último nó
        atual = atual->prox;
    }
    atual->prox = novo; // Após encontrar o último, `prox` recebe o endereço do novo nó
}

// Faz a listagem dos componentes
void listar_componentes(No *lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Lista de componentes:\n");

    int i = 0;
    for (No *atual = lista; atual != NULL; atual = atual->prox) { // Lista cada componente até que o endereço do próximo nó seja nulo, indicando ser o último
        i++;
        printf("%d - %s; %d; %s.\n", i, atual->dado.nome, atual->dado.valor, atual->dado.tipo);
    }

    printf("\n");
}

// Cria um arquivo com os dados de todos os componentes já registrados
void gerar_arquivo(FILE *file, No *lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    file = fopen("../lista-componentes.csv", "w"); // Abre o arquivo no modo de escrita

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Erro ao abrir o arquivo!\n\n");
        exit(1);
    }

    for (No *atual = lista; atual != NULL; atual = atual->prox) { // Escreve os dados de cada componente no arquivo até que o endereço do próximo nó seja nulo
        fprintf(file, "%s; %d; %s\n", atual->dado.nome, atual->dado.valor, atual->dado.tipo);
    }

    fclose(file); // Fecha o arquivo

    printf("Arquivo criado com sucesso!\n\n");
}
