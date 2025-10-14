#include <stdio.h>
#include <locale.h>

#define PI 3.1415
#define QUADRADO(x) (x * x)

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float raio, circunferencia;

    printf("Digite o valor do raio em cm: ");
    scanf("%f", &raio);

    circunferencia = PI * QUADRADO(raio);

    printf("%.2f cm\n", circunferencia);

    return 0;
}