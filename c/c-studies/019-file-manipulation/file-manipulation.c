#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *fptr; // Ponteiro do tipo file

    // Escrita

    fptr = fopen("../test-file.txt", "w"); // Cria um arquivo com o modo "w" (write), permitindo escrita
    // Mesma coisa que usar o modo "r+", que abre o arquivo para leitura e escrita
    // Usando o modo "a", é possível escrever dentro do arquivo sem sobrescrever o conteúdo

    fseek(fptr, 0, SEEK_SET); // Aponta para o início do arquivo
    // Usando SEEK_END, aponta para o final do arquivo

    fprintf(fptr, "1-Hello World!"); // Escreve dentro do arquivo

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

    char fileContent1[100];

    while(fscanf(fptr, "%s", fileContent1) != EOF){ // Pega e armazena cada linha até o fim do arquivo
        printf("%s", fileContent1);
    }

    fclose(fptr);

    return 0;
}
