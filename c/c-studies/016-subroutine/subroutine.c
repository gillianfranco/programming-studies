#include <stdio.h>
#include <math.h>

// Função sem retorno
void sayHello(){
    printf("Hello, World!");
    breakLn();
}

void breakLn(){
    printf("\n");
}

// Função com retorno de inteiro
int sum(int a, int b){
    int res = a + b;

    return res;
}

// Com string como argumento
void sayHello2(char name[], int age){
    printf("Hello %s. You are %d years old.\n", name, age);
}

int main(){

    sayHello();
    printf("%d", sum(10, 7));
    breakLn();
    sayHello2("Gillian", 19);

    // Funções Matemáticas
    printf("%.2f\n", sqrt(16));
    printf("%.2f\n", ceil(16.5)); // Arredonda para cima
    printf("%.2f\n", floor(16.5)); // Arredonda para baixo
    printf("%.2f\n", pow(10, 2)); // Arredonda para cima

    return 0;
}