#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

enum dia_semana {
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    enum dia_semana dia = TERCA;

    switch (dia) {
        case DOMINGO:
            printf("Hoje é domingo!\n");
            break;
        case SEGUNDA:
            printf("Hoje é segunda!\n");
            break;
        case TERCA:
            printf("Hoje é terça!\n");
            break;
        case QUARTA:
            printf("Hoje é quarta!\n");
            break;
        case QUINTA:
            printf("Hoje é quinta!\n");
            break;
        case SEXTA:
            printf("Hoje é sexta!\n");
            break;
        case SABADO:
            printf("Hoje é sábado!\n");
            break;
        default:
            exit(1);
    }

    return 0;
}
