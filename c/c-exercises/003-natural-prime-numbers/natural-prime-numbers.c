#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Numeros impares da sequencia de n numeros naturais\n");
    printf("Digite o valor de n: ");
    scanf("%d", &num);
    printf("Os numeros impares da sequencia de %d numeros naturais e': ", num);
    for(int i = 1; i <= num * 2; i += 2){
        printf("%d ", i);
    }

    system("pause >> NULL");
    return 0;
}