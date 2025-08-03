#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdeAlunos, nota, maiorNota, menorNota, cont;
    printf("Registro de notas\n");
    printf("Digite a Quantidade de Alunos: ");
    scanf("%d", &qtdeAlunos);
    cont = 0;
    menorNota = 100;
    maiorNota = 0;

    while(cont < qtdeAlunos){
        printf("Digite uma nota de 0 a 100: ");
        scanf("%d", &nota);
        if(nota > maiorNota){
            maiorNota = nota;
        }else if(nota < menorNota){
            menorNota = nota;
        }
        cont++;
    }
    printf("A maior nota obtida foi: %d\n", maiorNota);
    printf("A menor nota obtida foi: %d\n", menorNota);

    system("pause >> NULL");
    return 0;
}