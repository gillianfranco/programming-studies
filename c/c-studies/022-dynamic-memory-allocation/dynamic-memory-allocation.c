#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    int *vetor;

    printf("Digite o número inicial de slots em um vetor: ");
    scanf("%d", &n);

    vetor = malloc(n * sizeof(*vetor)); // Aloca a memória. Mesma coisa que `calloc(n, sizeof(int))`
    
    if (vetor == NULL){
        printf("Erro na alocação de memória!");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        *(vetor + i) = (i + 1) * 10;
        printf("%d\t", *(vetor + i));
    }

    printf("\n\nDigite o novo número de slots para o vetor: ");
    scanf("%d", &n);

    vetor = realloc(vetor, n * sizeof(*vetor)); // realoca a memória a partir do mesmo endereço

    for (int i = 0; i < n; i++) {
        *(vetor + i) = (i + 1) * 10;
        printf("%d\t", *(vetor + i));
    }

    printf("\n");
    
    free(vetor); // libera a memória

    return 0;

}
