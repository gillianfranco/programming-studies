#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello, ";
    char str2[] = "World!";

    strcat(str1, str2); // Concatena st2 com st1
    printf("%s\n", str1);

    return 0;
}