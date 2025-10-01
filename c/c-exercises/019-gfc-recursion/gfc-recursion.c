#include <stdio.h>
#include <locale.h>

unsigned int mdc(unsigned int a, unsigned int b);

int main() {

    setlocale(LC_ALL, "Portuguese");

    unsigned int n1 = 48, n2 = 18;

    printf("O MDC entre %u e %u é %u.\n", n1, n2, mdc(n1, n2));

    return 0;
}

unsigned int mdc(unsigned int a, unsigned int b) {
    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}