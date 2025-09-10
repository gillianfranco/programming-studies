#include <stdio.h>

int main()
{
    char character;

    printf("Set a character: ");
    scanf("%c", &character);

    printf("\nThe character \"%c\" is \"%d\" in ASCII.\n", character, character);

    return 0;
}
