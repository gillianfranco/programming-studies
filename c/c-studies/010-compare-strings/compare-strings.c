#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";
    
    printf("str1 e str2 --> %d\n", strcmp(str1, str2)); // 0, então são iguais
    printf("str1 e str2 --> %d\n", strcmp(str1, str3)); // -4, então existem 4 caracteres diferentes

    return 0;
}