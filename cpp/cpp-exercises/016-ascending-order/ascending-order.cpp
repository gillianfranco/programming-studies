#include <iostream>
using namespace std;

int main(){
    int temp, qtde;
    qtde = 5;
    int *numbers = new int[qtde];

    cout << "Digite: " << endl;

    for(int i = 0; i < qtde; i++){
        cout << "Um numero para a posicao [" << i << "]: ";
        cin >> numbers[i];
    }
    cout << "\n\n";

    cout << "Vetor nao ordenado: | ";
    for(int i = 0; i < qtde; i++){
        cout << numbers[i] << " | ";
    }

    cout << "\n\n";

    for(int i = 0; i < qtde; i++){
        for(int j = 1; j < qtde; j++){
            if(numbers[i] > numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "Vetor ordenado: | ";
    for(int i = 0; i < qtde; i++){
        cout << numbers[i] << " | ";
    }

    return 0;
}