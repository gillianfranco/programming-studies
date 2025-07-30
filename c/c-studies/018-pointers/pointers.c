#include <stdio.h>

void calculate(int* n){
    (*n)++;
}

int main(){
    int myAge = 19;

    printf("'myAge' value: %d\n", myAge); // Impressão do valor de 'myAge'
    printf("'myAge' address: %p\n", &myAge); // Impressão do endereço de 'myAge'

    int* ptr = &myAge; // Ponteiro da variável 'myAge'

    printf("'myAge' value from 'ptr': %d\n", *ptr); // Impressão do valor de 'myAge'
    printf("'myAge' address from 'ptr': %p\n\n", ptr); // Impressão do endereço de 'myAge'
    
    // Passagem por referência

    int number = 10;

    printf("Before: %d\n", number);

    calculate(&number);
    printf("After: %d\n\n", number);

    // Ponteiro como array

    int myNumbers[4] = {25, 50, 75, 100};
    
    // Endereço da posição 0

    printf("%p\n", &myNumbers);
    printf("%p\n\n", &myNumbers[0]);

    // Valor de cada posição com ponteiro

    int* ptr2 = &myNumbers[0];

    for(int i = 0; i < 4; i++){
        printf("%d\n", *(ptr2 + i));
    }

    return 0;
}   