#include <stdio.h>
#include <stdbool.h> // Biblioteca para trabalhar com valores booleanos

int main(){
    // Declaração
    int idade;
    int x, y, z;
    int soma;

    // Declaração e inicialização
    int age = 19;
    printf("%d\n", age);

    int a = 1, b = 2, c = 3;
    printf("%d - %d - %d\n", a, b, c);
    
    // Inicialização
    idade = 18;
    printf("%d\n", idade);

    x = y = z = 50;
    printf("%d - %d - %d\n", x, y, z);

    x = y = z = idade;
    printf("%d - %d - %d\n", x, y, z);

    soma = x + z;
    printf("%d\n", soma);

    // Impressão para diferentes tipos
    short varIntShort = 1000; // 2 bytes
    long varIntLong = 123456789; // 8 bytes
    float varFloat = 1.7; // 4 bytes
    double varDouble = 1.7; // 8 bytes
    char varChar = 'G'; // 1 byte
    char varString[] = "Gillian";

    printf("%d\n", varIntShort); // ou %i
    printf("%ld\n", varIntLong);
    printf("%f\n", varFloat); // ou %.2f para somente duas casas decimais
    printf("%lf\n", varDouble);
    printf("%c\n", varChar);
    printf("%s\n", varString);

    // Potenciação na base 10
    float f1 = 17e2; // e2 = 10^2
    double d1 = 17E5;

    printf("%f\n", f1);
    printf("%lf\n", d1);

    // ASCII
    char A = 65, B = 66, C = 67;
    printf("%c\n", A);
    printf("%c\n", B);
    printf("%c\n", C);

    // Bool
    bool varBool = true;
    (varBool) ? printf("True\n") : printf("False\n"); // Operador Ternário

    // Constantes

    const float PI = 3.1415;
    printf("%.4f\n", PI);

    // Casting de variáveis

    printf("%lf\n", (double)x);

    // Nomes válidos
    int adição;
    float nota4;
    float menor_nota; // Forma recomendada
    float Maior_nota;
    float notaMedia;
    int _menor_;
    int $dolar;

    return 0;
}