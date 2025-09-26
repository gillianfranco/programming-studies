#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calculate(int* n);

struct Person {
    char name[50];
    int age;
};

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



    // Ponteiro como vetor

    int myNumbers[4] = {25, 50, 75, 100};
    
    printf("%p\n", &myNumbers); // Endereço da posição 0. Mesma coisa usando `&myNumbers[0]`

    int* ptr2 = &myNumbers[0]; // Ponteiro que aponta para a primeira posição do vetor

    for(int i = 0; i < 4; i++) {
        printf("%d\n", *(ptr2 + i)); // Impressão dos elementos a partir da soma do endereço de cada posição
    }



    // Ponteiro como matriz

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("\n%p\n", &matriz);

    int *ptr3 = &matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", *ptr3); // Impressão do elemento atual
            ptr3++; // Soma no endereço
        }
        printf("\n");
    }



    // Ponteiro como struct

    struct Person person1;
    strcpy(person1.name, "Gillian");
    person1.age = 19;

    struct Person *ptr_person1;
    ptr_person1 = &person1;

    printf("\n%s\n", ptr_person1->name);
    printf("%d\n", ptr_person1->age);



    // Ponteiro de ponteiro

    int x = 17;
    int *ptr_x = &x;
    int **ptr_ptr_x = &ptr_x; 
    
    printf("\n%d\n", x);
    printf("%d\n", *ptr_x);
    printf("%d\n", **ptr_ptr_x);

    return 0;
}

void calculate(int* n){
    (*n)++;
}