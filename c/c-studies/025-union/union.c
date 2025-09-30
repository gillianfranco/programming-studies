#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

union numero {
    int inteiro;
    float real;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    union numero x;

    x.inteiro = 17;

    printf("Inteiro: %d\n", x.inteiro);

    x.real = 10.10;

    printf("Real: %f\n\n", x.real);

    printf("Inteiro: Endereço na memória --> %p\nReal: Endereço na memória --> %p\n", &x.inteiro, &x.real);

    return 0;
}
