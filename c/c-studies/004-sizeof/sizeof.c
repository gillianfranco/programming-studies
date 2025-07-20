#include <stdio.h>

int main(){
    int varInt;
    printf("varInt: %lu bytes\n", sizeof(varInt)); // Retorna o tamanho em bytes

    int array[] = {0, 1, 2, 3};
    printf("array: %lu elementos\n", sizeof(array) / sizeof(int)); // Para saber a quantidade de elementos em um array

    return 0;
}