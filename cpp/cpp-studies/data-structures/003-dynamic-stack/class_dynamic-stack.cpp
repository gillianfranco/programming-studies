#include <iostream>
#include "dynamic-stack.h"
#include <cstddef>
using namespace std;

dynamicStack::dynamicStack(){
    TopNode = NULL; // Faz com que a instância privada receba valor nulo
}

dynamicStack::~dynamicStack(){
    Node* TempNode;
    while(TopNode != NULL){
        TempNode = TopNode;
        TopNode = TopNode->proximo;
        delete TempNode;
    }
}

bool dynamicStack::isFull(){
    Node* NewNode; // Aponta para uma local onde será armazenado uma instância da estrutura Node
    try{ // Tenta armazenar um elemento
        NewNode = new Node; // Faz com que o local que NewNode está apontando se torne uma instância da classe Node
        delete NewNode;
        return false;
    }catch(bad_alloc exception){ // Se o motivo por não ter sucesso na tentativa foi por um mau alocamento, ou seja, por não ter espaço na memória do computador, então será executado o código entre chaves
        return true;
    }
}

bool dynamicStack::isEmpty(){
    return (TopNode == NULL); // Se nó que está no topo da pilha for nulo, quer dizer que a lista está vazia
}

void dynamicStack::push(TipoItem item){
    if(!isFull()){
        Node* NewNode = new Node;
        NewNode->valor = item;
        NewNode->proximo = TopNode;
        TopNode = NewNode;
    }else{
        cout << "A pilha esta cheia! Nao e' possivel inserir mais elementos." << endl;
    }
}

TipoItem dynamicStack::pop(){
    if(!isEmpty()){
        Node* TempNode = TopNode;
        TipoItem item = TempNode->valor;
        TopNode = TopNode->proximo;
        delete TempNode;
        return item;
    }else{
        cout << "A pilha já esta vazia! Nao ha elemento para remover." << endl;
        return 0;
    }
}

void dynamicStack::print(){
    Node* TempNode = TopNode;
    cout << "Elementos: ";
    while(TempNode != NULL){
        cout << TempNode->valor << endl;
        TempNode = TempNode->proximo;
    }
    cout << endl;
    delete TempNode;
}

int dynamicStack::size(){
    Node* TempNode = TopNode;
    int size = 0;
    while(TempNode != NULL){
        size++;
        TempNode = TempNode->proximo;
    }
    return size;
}