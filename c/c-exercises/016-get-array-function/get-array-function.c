#include <stdio.h>
#include <stdlib.h>

int *get_int_array(int size);

int main() {
    
    int *array = get_int_array(10);

    if (array == NULL) {
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
        printf("%d\t", array[i]);
    }

    printf("\n");

    free(array);

    return 0;
}

int *get_int_array(int size) {
    int *array = malloc(sizeof(*array) * size);

    return array;
}