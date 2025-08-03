#include <iostream>
#include "queue.h"
using namespace std;

int main(){
    queue Fila1;
    TipoItem item;
    int opcao;

    cout << " ------ Gerenciador de Fila ------ ";

    do{
        cout << "\n\n0-Para sair do programa.\n1-Para inserir elemento.\n2-Para remover elemento.\n3-Para imprimir a fila.\n4-Para saber tamanho da fila.\n\nDigite: ";
        cin >> opcao;
        cout << endl;
        switch(opcao){
            case 0:
                Fila1.~queue();
                break;
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> item;
                Fila1.enqueue(item);
                cout << endl;
                break;
            case 2:
                item = Fila1.dequeue();
                cout << "Elemento removido: " << item << endl;
                system("pause >> NULL");
                break;
            case 3:
                Fila1.print();
                system("pause >> NULL");
                break;
            case 4:
                cout << "Tamanho: " << Fila1.size() << endl;
                system("pause >> NULL");
                break;
            default:
                cout << "Opcao invalida!" << endl;
                system("pause >> NULL");
                break;
        }

        cout << "\n --------------------------------- ";
    }while(opcao != 0);

    return 0;
}