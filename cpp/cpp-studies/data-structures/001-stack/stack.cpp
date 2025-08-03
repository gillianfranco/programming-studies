#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    stack Pilha1;
    TipoItem item;
    int opcao;

    cout << " ------ Gerenciador de Pilha ----- ";

    do{
        cout << "\n\n0 - Sair.\n1 - Para Inserir um novo elemento.\n2 - Para Remover um elemento.\n3 - Imprimir a pilha.\n4 - Informar tamanho da pilha.\n\n";
        cout << "Digite: ";
        cin >> opcao;
        switch(opcao){
            case 0:
                Pilha1.~stack();
                break;
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> item;
                Pilha1.push(item);
                cout << endl;
                break;
            case 2:
                item = Pilha1.pop();
                cout << "Elemento removido: " << item << endl;
                system("pause >> NULL");
                break;
            case 3:
                Pilha1.print();
                system("pause >> NULL");
                break;
            case 4:
                cout << "Tamanho: " << Pilha1.size() << endl;
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