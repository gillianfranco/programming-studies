#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello, World!";
    char str2[30];

    strcpy(str2, str1); // Copia str1 para str2
    printf("%s\n", str2);

    return 0;
}