#include <iostream>
#include "dynamic-queue.h"
using namespace std;

int main(){
    dynamicQueue Fila1;
    TipoItem item;
    int opcao;

    cout << " --- Gerenciamento de Fila --- \n\n";
    while(opcao != 0){
        cout << "0-Sair.\n1-Inserir Elemento.\n2-Remover Elemento\n3-Imprimir Fila.\n4-Informar Tamanho.\n\nDigite: ";
        cin >> opcao;
        cout << endl;
        switch(opcao){
            case 0:
                Fila1.~dynamicQueue();
                break;
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> item;
                Fila1.push(item);
                cout << "\n --------------------------------------- \n\n";
                break;
            case 2:
                item = Fila1.pop();
                cout << "Elemento removido: " << item << ".\n";
                system("pause << NULL");
                cout << "\n --------------------------------------- \n\n";
                break;
            case 3:
                Fila1.print();
                system("pause << NULL");
                cout << "\n --------------------------------------- \n\n";
                break;
            case 4:
                cout << "Tamanho: " << Fila1.size() << ".\n";
                system("pause << NULL");
                cout << "\n --------------------------------------- \n\n";
                break;
            default:
                cout << "Opcao Invalida! Escolha outra opcao.\n";
                system("pause << NULL");
                cout << "\n --------------------------------------- \n\n";
                break;
        }
    }

    return 0;
}