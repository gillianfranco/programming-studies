#include <stdio.h>
#include <locale.h>

float multiplicar2Numeros(float b, float h);
float calcularMomentoInercia(float b, float h);
float elevarAoCubo(float x);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float largura, altura, area, momento;
    int vigaApta;

    printf("========== Cálculo de Momento de Inércia de uma Viga ==========\n\n");

    // Coleta dos dados
    printf("Informe a largura em cm: ");
    scanf("%f", &largura);
    printf("Informe a altura em cm: ");
    scanf("%f", &altura);

    // Cálculo da área
    area = multiplicar2Numeros(largura, altura);

    // Cálculo do momento de inércia
    momento = calcularMomentoInercia(largura, altura);

    // Verifica se a viga suporta uma carga básica
    vigaApta = (area >= 100) ? 1 : 0;

    // Impressão dos resultados
    printf("\nÁrea ---> %.2f cm^2\n", area);
    printf("Momento de Inércia ---> %.2f cm^4\n", momento);
    if (vigaApta) // Imprime determinada mensagem dependendo se a viga estiver apta ou não
        printf("A viga está apta para carga básica (Área >= 100 cm^2).\n"); 
    else 
        printf("A viga não está apta para carga básica (Área >= 100 cm^2).\n");

    return 0;
}

float multiplicar2Numeros(float b, float h) {
    return b * h;
}

float calcularMomentoInercia(float b, float h) {
    return (b * elevarAoCubo(h)) / 12;
}

float elevarAoCubo(float x) {
    return x * x * x;
}
