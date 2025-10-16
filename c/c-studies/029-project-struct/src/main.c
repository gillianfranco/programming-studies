#include <stdio.h>
#include "../include/mathlib.h"

int main() {
    int n1 = 10, n2 = 7;

    printf("%d + %d = %d\n", n1, n2, (int)somaDoisNum((double)n1, (double)n2));
    return 0;
}

// Comando para transformar em arquivo objeto ---> gcc -c ./src/main.c -o ./bin/main.o
// Comando para linkar arquivos objetos e criar um executável ---> gcc ./bin/mathlib.o ./bin/main.o -o app
// Comando para criar uma biblioteca estática ---> ar rcs ./lib/libmath.a ./bin/mathlib.o
// Comando para linkar arquivos main.o + libmath.a (compilar tudo) ---> gcc ./bin/main.o -L./lib -lmath -o app
// Comando para compilar biblioteca dinâmica --> gcc -fPIC -c ./src/mathlib.c -o ./bin/mathlib_dynamic.o
// Comando para gerar a biblioteca compartilhada (biblioteca dinâmica) ---> gcc -shared -Wl,-soname,libmath.so -o ./lib/libmath.so ./bin/mathlib_dynamic.o
// Comando para linkar arquivos main.o + libmath.so ---> gcc ./bin/main.o -L./lib -lmath -Wl,-rpath,'$ORIGIN/lib' -o ./app
