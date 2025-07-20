#include <stdio.h>

int main(){

    // Declaração e Inicialização
    char greetings1[] = "Hello World 1!";

    char greetings2[30];
    sprintf(greetings2, "Hello World 2!");

    char greetings3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', ' ', '3', '!', '\0'};

    // Saída

    printf("%s\n", greetings1);
    printf("%s\n", greetings2);
    printf("%s\n\n", greetings3);

    printf("%c\n", greetings1[0]); // H
    printf("%c\n\n", greetings1[13]); // !

    // Substituição
    greetings2[0] = 'J';
    printf("%s\n\n", greetings2);

    // Caracteres especiais
    char text[] = "\"Aspas Duplas\" - \'Aspas Simples\' - \\Contra barras\\";
    printf("%s\n", text);

    return 0;
}