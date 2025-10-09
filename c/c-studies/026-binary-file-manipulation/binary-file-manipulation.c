#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int id;
    float value;
} Data;

int main() {
    setlocale(LC_ALL, "Portuguese");

    Data data_out = {1, 17.7};
    Data data_in;

    // Criação/Abertura do arquivo
    FILE *file;
    file = fopen("../binary-file.bin", "wb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // Escrita no arquivo
    size_t written = fwrite(&data_out, sizeof(Data), 1, file);
    if (written != 1) {
        printf("Erro ao escrever no arquivo!\n");

        fclose(file);
        exit(1);
    }

    fclose(file);

    // Abertura no modo leitura
    file = fopen("../binary-file.bin", "rb");
    
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // Leitura do arquivo
    size_t read = fread(&data_in, sizeof(Data), 1, file);
    if (written != 1) {
        printf("Erro ao escrever no arquivo!\n");

        fclose(file);
        exit(1);
    }

    fclose(file);

    printf("ID: %d; Valor: %.2f.\n", data_in.id, data_in.value);

    return 0;
}