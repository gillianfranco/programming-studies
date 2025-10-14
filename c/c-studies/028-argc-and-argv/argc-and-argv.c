#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y);

int main (int argc, char *argv[]) { // Permite passar argumentos na execução do arquivo executável. Use "./argc-and-argv 1 2" no terminal para testar
    if (argc == 3) {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        printf("%d + %d = %d\n", num1, num2, soma(num1, num2));
    }

    return 0;
}

int soma (int x, int y) {
    return x + y;
}