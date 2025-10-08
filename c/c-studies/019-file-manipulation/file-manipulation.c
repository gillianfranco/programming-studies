#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *fptr; // Ponteiro do tipo file

    // Escrita com fpritf

    fptr = fopen("../test-file.txt", "w"); // Cria um arquivo com o modo "w" (write), permitindo escrita
    // Mesma coisa que usar o modo "r+", que abre o arquivo para leitura e escrita
    // Usando o modo "a", é possível escrever dentro do arquivo sem sobrescrever o conteúdo

    fseek(fptr, 0, SEEK_SET); // Aponta para o início do arquivo
    // Usando SEEK_END, aponta para o final do arquivo

    char string[] = "1 Hello World!";

    fprintf(fptr, "%s", string); // Escreve dentro do arquivo e permite usar placeholders

    fclose(fptr);

    // Escrita com fputs

    fptr = fopen("../test-file.txt", "w");

    fputs(string, fptr); // Semelhante ao printf

    fclose(fptr);

    // Escrita com fputc

    fptr = fopen("../test-file.txt", "w");

    for (int i = 0; i < (int)sizeof(string); i++) { // Escreve dentro de um arquivo caractere por caractere
        fputc(string[i], fptr);
    }

    fclose(fptr);

    // Leitura com a função `fgets`

    fptr = fopen("../test-file.txt", "r"); // Abre o arquivo no modo "r" (read)

    char fileContent[100];
    int sizeFileContent = sizeof(fileContent) / sizeof(char);
    
    if(fptr != NULL){
        while(fgets(fileContent, sizeFileContent, fptr)){ // Pega cada linha do arquivo e armazena em uma string
            printf("%s\n", fileContent);
        }
    } else {
        printf("404 - Diretório não encontrado\n");
    }

    fclose(fptr);

    // Leitura com a função `fscanf`

    fptr = fopen("../test-file.txt", "r"); // Abre o arquivo no modo "r" (read)

    if(fptr == NULL) {
        printf("404 - Diretório não encontrado\n");
        exit(1); // Finaliza a execução do programa
    }

    int num;
    char word1[10], word2[10];

    while(fscanf(fptr, "%d %s %s", &num, word1, word2) != EOF){ // Pega e armazena cada linha até o fim do arquivo e é possível armazenar em diferentes variáveis
        printf("%d %s %s", num, word1, word2);
    }

    printf("\n");

    fclose(fptr);

    // Leitura com a função `fgetc`

    fptr = fopen("../test-file.txt", "r");

    char caractere;

    while ((caractere = fgetc(fptr)) != EOF) { // Pega e armazena cada caractere até o fim do arquivo
        printf("%c", caractere);
    }

    printf("\n");

    fclose(fptr);

    return 0;
}
