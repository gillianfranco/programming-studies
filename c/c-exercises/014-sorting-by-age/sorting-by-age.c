#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void bubbleSort(struct Pessoa *pessoas, int tamanho);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    struct Pessoa pessoas[3];

    strcpy(pessoas[0].nome, "Pessoa1");
    pessoas[0].idade = 39;
    
    strcpy(pessoas[1].nome, "Pessoa2");
    pessoas[1].idade = 27;
    
    strcpy(pessoas[2].nome, "Pessoa3");
    pessoas[2].idade = 29;

    printf("====== Antes ======\n");
    for (int i = 0; i < 3; i++) {
        printf("%d - %s, %d\n", i + 1, pessoas[i].nome, pessoas[i].idade);
    }

    bubbleSort(pessoas, 3);

    printf("\n====== Depois ======\n");
    for (int i = 0; i < 3; i++) {
        printf("%d - %s, %d\n", i + 1, pessoas[i].nome, pessoas[i].idade);
    }

    return 0;

}

void bubbleSort(struct Pessoa *pessoas, int tamanho){
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i; j++){
            if (pessoas[j].idade > pessoas[j + 1].idade) {
                struct Pessoa aux = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = aux;
            }
        }
    }
}
