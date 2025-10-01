#include <stdio.h>

unsigned int fibonacci(unsigned int n);

int main() {
    
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}

unsigned int fibonacci(unsigned int n) {
    if (n <= 1)
        return n;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}