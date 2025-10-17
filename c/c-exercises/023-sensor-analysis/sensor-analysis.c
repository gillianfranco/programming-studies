#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    int qtde_leituras;
    float *leituras, soma_leituras, media_leituras, minimo, maximo;

    printf("========== Análise de Leituras de Sensores ==========\n\n");

    // Coleta a quantidade de leituras
    printf("Digite o número de leituras: ");
    scanf("%d", &qtde_leituras);

    // Faz a alocação dinâmica com a quantidade de leituras informada
    leituras = calloc(qtde_leituras, sizeof(*leituras));

    // Coleta as leituras e armazena a soma total de todas elas
    soma_leituras = 0;
    printf("\nInforme cada leitura a seguir:\n");
    for (int i = 0; i < qtde_leituras; i++) {
        printf("Leitura %d ---> ", i + 1);
        scanf("%f", leituras + i);
        soma_leituras += *(leituras + i);
    }

    // Calcula a média aritmética das leituras
    media_leituras = soma_leituras / qtde_leituras;
    
    // Identifica o valor mínimo
    minimo = leituras[0]; // Inicializa `minimo` com a primeira leitura
    for (int i = 0; i < qtde_leituras - 1; i++) {
        if (minimo > leituras[i + 1]) { // Se o valor mínimo atual for maior que a próxima leitura, então `minimo` recebe a próxima leitura
            minimo = leituras[i + 1];
        }
    }

    // Identifica o valor máximo
    maximo = leituras[0]; // Inicializa `maximo` com a primeira leitura
    for (int i = 0; i < qtde_leituras - 1; i++) {
        if (maximo < leituras[i + 1]) { // Se o valor máximo atual for menor que a próxima leitura, então `maximo` recebe a próxima leitura
            maximo = leituras[i + 1];
        }
    }

    // Apresenta os resultados
    printf("\nResultados:\n");
    printf("- Média: %.2f\n- Mínimo: %.2f\n- Máximo: %.2f\n", media_leituras, minimo, maximo);
   
    return 0;
}

