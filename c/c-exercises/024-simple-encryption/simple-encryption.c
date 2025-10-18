#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_CARACTERES 100

void criptografar(char *frase);

int main() {

    setlocale(LC_ALL, "Portuguese");

    char frase[MAX_CARACTERES], frase_criptografada[MAX_CARACTERES];

    printf("========== Criptografia Simples ==========\n\n");

    // Coleta a frase
    printf("Digite uma frase: ");
    fgets(frase, MAX_CARACTERES, stdin);

    // Copia a frase para a variável `frase_criptografada`
    strcpy(frase_criptografada, frase);

    // Criptografa a frase armazenada na variável `frase_criptografada`
    criptografar(&frase_criptografada[0]);
    
    // Apresenta os resultados
    printf("\nFrase Original: %s", frase);
    printf("Frase Criptografada: %s", frase_criptografada);

    return 0;
}

void criptografar(char *frase) {
    int tamanho_frase = strlen(frase); // Coleta a quantidade de caracteres na string
    
    for (int i = 0; i < tamanho_frase; i++) { // Substitui caracteres por outros
        if (frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'à') {
            frase[i] = '2';
        } else if (frase[i] == 'E' || frase[i] == 'e' || frase[i] == 'é') {
            frase[i] = '3';
        } else if (frase[i] == 'I' || frase[i] == 'i' || frase[i] == 'í') {
            frase[i] = '4';
        } else if (frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'ó') {
            frase[i] = '5';
        } else if (frase[i] == 'U' || frase[i] == 'u' || frase[i] == 'ú') {
            frase[i] = '6';
        } else if (frase[i] == '0' || frase[i] == '5') {
            frase[i] = 'a';
        } else if (frase[i] == '1' || frase[i] == '6') {
            frase[i] = 'e';
        } else if (frase[i] == '2' || frase[i] == '7') {
            frase[i] = 'i';
        } else if (frase[i] == '3' || frase[i] == '8') {
            frase[i] = 'o';
        } else if (frase[i] == '4' || frase[i] == '9') {
            frase[i] = 'u';
        }
    }
}