#include <stdio.h>

void bubbleSort(int *array, int tamanho);

int main() {
    int array[] = {5, 0, 3, 8, 29, 87, 49, 2};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("[\t");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\t", array[i]);
    }
    printf("]\n");

    bubbleSort(&array[0], tamanho);

    printf("[\t");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\t", array[i]);
    }
    printf("]\n");

    return 0;
}

void bubbleSort(int *array, int tamanho) {
    
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i - 1; j++){
            if (array[j] > array[j + 1]) {
                int aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}
