#include <stdio.h>

void swap(int *a, int *b);

int main() {
    
    int x = 10;
    int y = 17;

    printf("X: %d\nY: %d\n\n", x, y);

    swap(&x, &y);

    printf("X: %d\nY: %d\n", x, y);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}