#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Estrutura para armazenar os dados de cada tarefa
typedef struct {
    int id_tarefa;
    char descricao[100];
    int prioridade;
} Tarefa;

// Nó da lista encadeada para armazenar Tarefa
typedef struct No {
    Tarefa dado;
    struct No *prox;
} No;

// Protótipos das funções
void clearBuffer();
void carregar_lista_tarefas(FILE *file, No **lista, int *tamanho_lista);
void salvar_lista_tarefas(FILE *file, No *lista);
void inserir_tarefa(Tarefa *tarefa);
void inserir_no_fim(No **lista, Tarefa tarefa);
void remover_tarefa(No **lista, int *tamanho_lista);
void editar_tarefa(No *lista);
void listar_tarefas(No *lista);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, tamanho_lista;
    No *lista_tarefas = NULL; // Ponteiro para o primeiro nó da lista de tarefas
    FILE *file = NULL; // Ponteiro para apontar ao arquivo onde os dados serão salvos

    tamanho_lista = 0;

    // Coleta as tarefas armazenadas no arquivo CSV caso existir
    carregar_lista_tarefas(file, &lista_tarefas, &tamanho_lista);

    // Executa pelo menos uma vez e depois será executado enquanto a opção escolhida pelo usuário for diferente de 0 (Sair)
    do {
        printf("========== Agendador de Tarefas ==========\n\n");

        // Solicita que o usuário escolha uma das opções
        printf("Digite apenas o número da opção desejada:\n");
        printf("0 - Sair (salvar CSV)\n1 - Inserir Tarefa\n2 - Remover Tarefa de Prioridade Máxima\n3 - Editar uma Tarefa\n4 - Listar Tarefas\n\n>> ");
        scanf("%d", &opcao);

        // Verifica se a escolha do usuário é válida
        while (opcao < 0 || opcao > 4) {
            printf("\nOpção inválida, tente novamente: ");
            scanf("%d", &opcao);
        }

        // Executa um bloco dependendo da escolha do usuário
        switch (opcao) {
            case 0:
                salvar_lista_tarefas(file, lista_tarefas); // Salva a lista de tarefas antes de finalizar a execução do programa
                printf("\nSaindo do programa...\n");
                break;

            case 1: {
                Tarefa *temp = calloc(1, sizeof(*temp)); // Aloca a estrutura `Tarefa`
                inserir_tarefa(temp); // Solicita que o usuário preencha os dados da tarefa
                inserir_no_fim(&lista_tarefas, *temp); // Copia a estrutura temporária para o fim da lista de tarefas
                free(temp); // Limpa a estrutura temporária
                tamanho_lista++; // Soma mais 1 componente ao tamanho da lista
                break;
            }

            case 2:
                if (lista_tarefas) { // Verifica se a lista está com alguma tarefa registrada
                    remover_tarefa(&lista_tarefas, &tamanho_lista);
                } else {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Não há nenhuma tarefa na lista de tarefas ainda!\n\n");
                }
                break;

            case 3:
                if (lista_tarefas) { // Verifica se a lista está com alguma tarefa registrada
                    editar_tarefa(lista_tarefas);
                } else {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Não há nenhuma tarefa na lista de tarefas ainda!\n\n");
                }
                break;

            case 4:
                if (lista_tarefas) { // Verifica se a lista está com alguma tarefa registrada
                    listar_tarefas(lista_tarefas);
                    printf("\n");
                } else {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Não há nenhuma tarefa na lista de tarefas ainda!\n\n");
                }
                break;
        }

    } while(opcao != 0);

    return 0;
}

// Limpa o buffer do teclado
void clearBuffer() {
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}

// Coleta as tarefas armazenadas no arquivo CSV
void carregar_lista_tarefas(FILE *file, No **lista, int *tamanho_lista) {
    
    Tarefa tarefa;
    char linha[256];
    
    // Tenta abrir o arquivo
    file = fopen("../4733015.csv", "r");
    if (file == NULL) {
        // Se não existir, um arquivo vazio é criado e aberto no modo de escrita
        file = fopen("../4733015.csv", "w");
        if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
            printf("Erro ao criar o arquivo!\n\n");
            exit(1);
        }
        fclose(file); // Fecha o arquivo
        return; // Finaliza a execução da função, já que a lista estará vazia
    }

    // Percorre linha por linha do arquivo CSV
    while (fgets(linha, sizeof(linha), file)) { 
        // Coleta os dados separados por `;`
        char *save = NULL;
        char *tok1 = strtok_r(linha, ";", &save);
        char *tok2 = strtok_r(NULL, ";", &save);
        char *tok3 = strtok_r(NULL, ";", &save);

        // Se um dos campos estiverem vazios, pula para a próxima linha
        if (!tok1 || !tok2 || !tok3) {
            continue;
        }

        // Trata os dados e armazena na estrutura `Tarefa`
        tarefa.id_tarefa = atoi(tok1);

        while (*tok2 == ' ') tok2++;
        
        char *end = tok2 + strlen(tok2) - 1;
        while (end > tok2 && (*end == '\n' || *end == '\r')) {
            *end = '\0';
            end--;
        }
        strncpy(tarefa.descricao, tok2, sizeof(tarefa.descricao) - 1);
        tarefa.descricao[sizeof(tarefa.descricao) - 1] = '\0';

        while (*tok3 == ' ') tok3++;
        char *end3 = tok3 + strlen(tok3) - 1;
        while (end3 > tok3 && (*end3 == '\n' || *end3 == '\r' || *end3 == ' ')) {
            *end3 = '\0';
            end3--;
        }
        tarefa.prioridade = atoi(tok3);

        // Adiciona a estrutura `Tarefa` com os dados da linha atual na lista encadeada
        inserir_no_fim(lista, tarefa);
        (*tamanho_lista)++; // Adiciona mais 1 na lista
    }

    fclose(file); // Fecha o arquivo
}

// Salva a lista encadeada no arquivo CSV
void salvar_lista_tarefas(FILE *file, No *lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    file = fopen("../4733015.csv", "w"); // Abre o arquivo no modo de escrita

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Erro ao criar o arquivo!\n\n");
        exit(1);
    }

    for (No *atual = lista; atual != NULL; atual = atual->prox) { // Escreve os dados de cada tarefa no arquivo até que o endereço do próximo nó seja nulo
        fprintf(file, "%d; %s; %d\n", atual->dado.id_tarefa, atual->dado.descricao, atual->dado.prioridade);
    }

    fclose(file); // Fecha o arquivo

    printf("Lista salva em um arquivo CSV!\n");
} 

// Adiciona os dados de uma tarefa no fim da lista encadeada
void inserir_tarefa(Tarefa *tarefa) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    // Solicita os dados da tarefa ao usuário e registra na estrutura `Tarefa`
    printf("ID da Tarefa: ");
    scanf("%d", &tarefa->id_tarefa);
    clearBuffer();
    printf("Descrição: ");
    fgets(tarefa->descricao, 100, stdin);
    // Remove o '\n' no final da string
    size_t len = strlen(tarefa->descricao);
    if (len > 0 && tarefa->descricao[len - 1] == '\n') {
        tarefa->descricao[len - 1] = '\0';
    }
    printf("Prioridade [1-Alta, 2-Media, 3-Baixa]: ");
    scanf("%d", &tarefa->prioridade);

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Tarefa registrada!\n\n");
}

// Adiciona uma tarefa no fim da lista encadeada
void inserir_no_fim(No **lista, Tarefa tarefa) {
    No *novo = malloc(sizeof(*novo)); // Aloca um novo nó
    novo->dado = tarefa; // Adiciona a nova tarefa
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

void remover_tarefa(No **lista, int *tamanho_lista) {

    Tarefa tarefa_removida;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    // Encontra o primeiro nó com prioridade == 1 (Alta)
    No *ant = NULL;
    No *atual = *lista;
    while (atual != NULL && atual->dado.prioridade != 1) {
        ant = atual;
        atual = atual->prox;
    }

    // Remove o primeiro nó da lista que tiver com prioridade == 1 (Alta)
    if (atual != NULL) {
        tarefa_removida = atual->dado;
        
        if (ant == NULL) {
            *lista = atual->prox;
        } else {
            ant->prox = atual->prox;
        }
        free(atual);
        (*tamanho_lista)--; // Diminui o tamanho da lista armazenado na variável `tamanho_lista`

        // Imprime a tarefa removida
        printf("Tarefa removida:\n");
        printf("ID: %d\nDescrição: %s\nPrioridade: %d\n\n", tarefa_removida.id_tarefa, tarefa_removida.descricao, tarefa_removida.prioridade);
    } else {
        printf("Nenhuma tarefa de prioridade máxima encontrada.\n\n");
    }
}

// Permite que o usuário edite uma tarefa
void editar_tarefa(No *lista) {
    int opcao_id, tarefa_encontrada;
    Tarefa tarefa_editada;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    listar_tarefas(lista); // Listas as tarefas já registradas

    // Permite que o usuário escolha qual tarefa editar
    printf("Digite a ID da tarefa desejada: ");
    scanf("%d", &opcao_id);

    // Verifica se a tarefa realmente existe
    tarefa_encontrada = 0;
    while (tarefa_encontrada == 0) {
        // Procura pela tarefa e imprime na tela, se ela existir
        for (No *atual = lista; atual != NULL; atual = atual->prox) {
            if (atual->dado.id_tarefa == opcao_id) {
                tarefa_editada.id_tarefa = opcao_id;
                printf("\nTarefa encontrada!\n\n");
                printf("ID: %d\nDescrição: %s\nPrioridade: %d\n\n", atual->dado.id_tarefa, atual->dado.descricao, atual->dado.prioridade);
                tarefa_encontrada = 1;
                break;
            }
        }
        // Se a tarefa escolhida pelo usuário não for encontrada, solicita novamente que o usuário digite uma ID de alguma tarefa
        if (tarefa_encontrada == 0) {
            printf("Tarefa não encontrada! Digite outra ID: ");
            scanf("%d", &opcao_id);
        }
    }

    // Solicita os novos dados ao usuário
    clearBuffer();
    printf("Nova Descrição: ");
    fgets(tarefa_editada.descricao, 100, stdin);
    // Remove o '\n' no final da string
    size_t len = strlen(tarefa_editada.descricao);
    if (len > 0 && tarefa_editada.descricao[len - 1] == '\n') {
        tarefa_editada.descricao[len - 1] = '\0';
    }
    printf("Nova Prioridade: ");
    scanf("%d", &tarefa_editada.prioridade);

    // Adiciona a cópia editada na lista encadeada
    for (No *atual = lista; atual != NULL; atual = atual->prox) {
        if (atual->dado.id_tarefa == opcao_id) {
            atual->dado = tarefa_editada;
        }
    }

    printf("\nTarefa editada!\n\n");
}

// Imprime a lista de tarefas registradas
void listar_tarefas(No *lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Lista de tarefas:\n");

    for (No *atual = lista; atual != NULL; atual = atual->prox) {
        printf("ID: %d\nDescrição: %s\nPrioridade: %d\n\n", atual->dado.id_tarefa, atual->dado.descricao, atual->dado.prioridade);
    }
}
