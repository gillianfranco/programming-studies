#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id_tarefa;
    char descricao[100];
    int prioridade;
} Tarefa;

void clearBuffer();
void carregar_lista_tarefas(FILE *file, Tarefa **lista, int *tamanho_lista);
void salvar_lista_tarefas(FILE *file, Tarefa *lista, int tamanho_lista);
void inserir_tarefa(Tarefa *tarefa);
void remover_tarefa(Tarefa *lista, int *tamanho_lista);
void editar_tarefa(Tarefa *lista, int tamanho_lista);
void listar_tarefas(Tarefa *lista, int tamanho_lista);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, tamanho_lista;
    Tarefa *lista_tarefas = NULL;
    FILE *file = NULL;

    tamanho_lista = 0;

    carregar_lista_tarefas(file, &lista_tarefas, &tamanho_lista);

    do {
        printf("========== Agendador de Tarefas ==========\n\n");

        printf("Digite apenas o número da opção desejada:\n");
        printf("0 - Sair (salvar CSV)\n1 - Inserir Tarefa\n2 - Remover Tarefa de Prioridade Máxima\n3 - Editar uma Tarefa\n4 - Listar Tarefas\n\n>> ");
        scanf("%d", &opcao);

        while (opcao < 0 || opcao > 4) {
            printf("\nOpção inválida, tente novamente: ");
            scanf("%d", &opcao);
        }

        switch (opcao) {
            case 0:
                salvar_lista_tarefas(file, lista_tarefas, tamanho_lista);
                printf("\nSaindo do programa...\n");
                break;

            case 1:
                Tarefa *temp = calloc(1, sizeof(*temp));
                inserir_tarefa(temp);
                lista_tarefas = realloc(lista_tarefas, (tamanho_lista + 1) * sizeof(Tarefa));
                lista_tarefas[tamanho_lista] = *temp;
                free(temp);
                tamanho_lista++;

                break;

            case 2:
                if (lista_tarefas) {
                    remover_tarefa(lista_tarefas, &tamanho_lista);
                } else {
                    printf("\nNão há nenhuma tarefa na lista de tarefas ainda!\n\n");
                }
                break;

            case 3:
                if (lista_tarefas) {
                    editar_tarefa(lista_tarefas, tamanho_lista);
                } else {
                    printf("\nNão há nenhuma tarefa na lista de tarefas ainda!\n\n");
                }
                break;

            case 4:
                if (lista_tarefas) {
                    listar_tarefas(lista_tarefas, tamanho_lista);
                    printf("\n");
                } else {
                    printf("\nNão há nenhuma tarefa na lista de tarefas ainda!\n\n");
                }
                break;
        }

    } while(opcao != 0);

    return 0;
}

void clearBuffer() {
    int k;
    while((k = getchar()) != '\n' && k != EOF);
}

void carregar_lista_tarefas(FILE *file, Tarefa **lista, int *tamanho_lista) {
    
    Tarefa tarefa;
    char linha[256];
    
    file = fopen("../4733015.csv", "wr");
    if (file == NULL) {
        printf("Erro ao criar o arquivo!\n\n");
        exit(1);
    }

    while (fgets(linha, sizeof(linha), file)) {
        char *save = NULL;
        char *tok1 = strtok_r(linha, ";", &save);
        char *tok2 = strtok_r(NULL, ";", &save);
        char *tok3 = strtok_r(NULL, ";", &save);

        if (!tok1 || !tok2 || !tok3) {
            continue;
        }

        // parse and trim tokens
        tarefa.id_tarefa = atoi(tok1);

        // trim leading spaces from descricao
        while (*tok2 == ' ') tok2++;
        // remove trailing newline/spaces from descricao
        char *end = tok2 + strlen(tok2) - 1;
        while (end > tok2 && (*end == '\n' || *end == '\r')) {
            *end = '\0';
            end--;
        }
        strncpy(tarefa.descricao, tok2, sizeof(tarefa.descricao) - 1);
        tarefa.descricao[sizeof(tarefa.descricao) - 1] = '\0';

        // prioridade may contain spaces/newline
        while (*tok3 == ' ') tok3++;
        char *end3 = tok3 + strlen(tok3) - 1;
        while (end3 > tok3 && (*end3 == '\n' || *end3 == '\r' || *end3 == ' ')) {
            *end3 = '\0';
            end3--;
        }
        tarefa.prioridade = atoi(tok3);

        Tarefa *newptr = realloc(*lista, ((*tamanho_lista) + 1) * sizeof(Tarefa));
        if (newptr == NULL) {
            printf("Erro ao alocar memória!\n");
            fclose(file);
            exit(1);
        }
        *lista = newptr;
        (*lista)[*tamanho_lista] = tarefa;
        (*tamanho_lista)++;
    }

    fclose(file);
}

void salvar_lista_tarefas(FILE *file, Tarefa *lista, int tamanho_lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    file = fopen("../4733015.csv", "w");

    if (file == NULL) {
        printf("Erro ao criar o arquivo!\n\n");
        exit(1);
    }

    for (int i = 0; i < tamanho_lista; i++) {
        fprintf(file, "%d; %s; %d\n", lista[i].id_tarefa, lista[i].descricao, lista[i].prioridade);
    }

    fclose(file);

    printf("Lista salva em um arquivo CSV!\n");
} 

void inserir_tarefa(Tarefa *tarefa) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

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

void remover_tarefa(Tarefa *lista, int *tamanho_lista) {

    Tarefa tarefa_removida;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    for (int i = 0; i < *tamanho_lista; i++) {
        if (lista[i].prioridade == 1) {
            tarefa_removida = lista[i];
            // shift elements left to remove the item from the array
            for (int j = i; j < *tamanho_lista - 1; j++) {
                lista[j] = lista[j + 1];
            }
            (*tamanho_lista)--;
            break;
        }
    }

    printf("Tarefa removida:\n");
    printf("ID: %d\nDescrição: %s\nPrioridade: %d\n\n", tarefa_removida.id_tarefa, tarefa_removida.descricao, tarefa_removida.prioridade);
}

void editar_tarefa(Tarefa *lista, int tamanho_lista) {
    int opcao_id, tarefa_encontrada;
    Tarefa tarefa_editada;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    listar_tarefas(lista, tamanho_lista);

    printf("Digite a ID da tarefa desejada: ");
    scanf("%d", &opcao_id);

    tarefa_encontrada = 0;
    while (tarefa_encontrada == 0) {
        for (int i = 0; i < tamanho_lista; i++) {
            if (lista[i].id_tarefa == opcao_id) {
                tarefa_editada.id_tarefa = opcao_id;
                printf("\nTarefa encontrada!\n\n");
                printf("ID: %d\nDescrição: %s\nPrioridade: %d\n\n", lista[i].id_tarefa, lista[i].descricao, lista[i].prioridade);
                tarefa_encontrada = 1;
                break;
            }
        }
        if (tarefa_encontrada == 0) {
            printf("Tarefa não encontrada! Digite outra ID: ");
            scanf("%d", &opcao_id);
        }
    }

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

    for (int i = 0; i < tamanho_lista; i++) {
        if (lista[i].id_tarefa == opcao_id) {
            lista[i] = tarefa_editada;
        }
    }

    printf("\nTarefa editada!\n\n");
}

void listar_tarefas(Tarefa *lista, int tamanho_lista) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Lista de tarefas:\n");
    
    for (int i = 0; i < tamanho_lista; i++) {
        printf("ID: %d\nDescrição: %s\nPrioridade: %d\n\n", lista[i].id_tarefa, lista[i].descricao, lista[i].prioridade);
    }
}
