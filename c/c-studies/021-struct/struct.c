#include <stdio.h>
#include <string.h>

// Declaração de uma struct
struct Address {
    char street[50];
    int number;
    char city[50];
    char state[50];
};

struct Person {
    char name[50];
    int age;
    struct Address address; // Struct aninhada
};

struct Car {
    char model[50];
    int miles;
    int year;
};

int main () {
    
    // Instanciando uma variável do tipo `Person`
    struct Person person1 = {"Gillian", 19, "Grove Street", 17, "Los Santos", "San Andreas"};
    printf("%s\t%d\n%s, %d, %s, %s.\n\n", person1.name, person1.age, person1.address.street, person1.address.number, person1.address.city, person1.address.state);

    // Alterando valores
    strcpy(person1.name, "Franco");
    person1.age = 20;
    printf("%s\t%d\n%s, %d, %s, %s.\n\n", person1.name, person1.age, person1.address.street, person1.address.number, person1.address.city, person1.address.state);

    // Copiando struct
    struct Person person2;
    memcpy(&person2, &person1, sizeof(struct Person)); // Copia os valores que estão armazenados no endereço de memória da variável `person1`
    printf("%s\t%d\n%s, %d, %s, %s.\n\n", person2.name, person2.age, person2.address.street, person2.address.number, person2.address.city, person2.address.state);

    // Array de Struct
    struct Car cars[7] = {
        {"Ferrari 488 GTB", 7500, 2018},
        {"Lamborghini Huracán", 5000, 2020},
        {"Porsche 911 Carrera", 15500, 2017},
        {"Chevrolet Corvette C8", 3100, 2022},
        {"Nissan GT-R", 20000, 2016},
        {"McLaren 720S", 6200, 2019},
        {"Audi R8", 13700, 2018}
    };

    for (int i = 0; i < 7; i++) {
        printf("- %s | %d miles | %d\n", cars[i].model, cars[i].miles, cars[i].year);
    }

    return 0;
}