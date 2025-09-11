#include <stdio.h>
#include <locale.h>

void declareStaticVariable();
void declareVariable();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    printf("Primeira função com uma variável estática:\n");
    declareStaticVariable();
    declareStaticVariable();
    declareStaticVariable();
    declareStaticVariable();
    declareStaticVariable();

    printf("\nSegunda função com uma variável normal:\n");
    declareVariable();
    declareVariable();
    declareVariable();
    declareVariable();
    declareVariable();
    
    return 0;
}

void declareStaticVariable()
{
    static int var1 = 10;
    var1++;
    printf("%d\n", var1);
}

void declareVariable()
{
    int var2 = 10;
    var2++;
    printf("%d\n", var2);
}
