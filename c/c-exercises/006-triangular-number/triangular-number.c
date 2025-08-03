#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    printf("Verificacao de numero triangular\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i*(i+1)*(i+2) < n; i++);

    if(i*(i+1)*(i+2) == n)
        printf("%d e' triangular pois %d * %d * %d e' igual a %d.", n, i, i+1, i+2, n);
    else
        printf("%d nao e' triangular", n);

    system("pause >> NULL");
    return 0;
}