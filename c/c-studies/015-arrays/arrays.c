#include <stdio.h>

int main(){
    // Declaração
    int array[10];

    // Inicialização
    array[0] = 17;

    // Declaração e Inicialização
    char letters[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    // Declaração e inicialização sem especificar o tamanho
    float numbers[] = {10, 17, 49.3, 30, 1.7, 22, 4.1};

    // Impressão ou varredura de um vetor
    int tamNumberArray = sizeof(numbers) / sizeof(float);
    for (int i = 0; i < tamNumberArray; i++){
        printf("Position %d: %.2f\n", i, numbers[i]);
    }

    printf("\n");

    // Impressão ou varredura de uma matriz

    int array2[2][3] = {
        {10, 93, 17},
        {30, 49, 21}
    };

    for(int i = 0; i < 2; i++){
        printf("|");
        for(int j = 0; j < 3; j++){
            printf(" %d |", array2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
