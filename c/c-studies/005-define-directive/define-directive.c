#include <stdio.h>

#define AREA_CIRCULO(raio) (PI * (raio * raio))
#define PI 3.14159

int main(){
    printf("Area do círculo: %f", AREA_CIRCULO(10));

    return 0;
}