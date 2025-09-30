#include <stdio.h>
#include <locale.h>

unsigned int fatorial(unsigned int n);

int main () {

    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, fatorial(num));

    return 0;
}

unsigned int fatorial(unsigned int n) {
    if (n == 0)
        return 1;
    else 
        return n * fatorial(n - 1);
}
