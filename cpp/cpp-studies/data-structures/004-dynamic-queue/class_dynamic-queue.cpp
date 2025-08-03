#include <iostream>
#include "dynamic-queue.h"
using namespace std;

dynamicQueue::dynamicQueue(){
    primeiro = NULL;
    ultimo = NULL;
}

dynamicQueue::~dynamicQueue(){
    Node *NodeTemp;
    while(primeiro != NULL){
        NodeTemp = primeiro;
        primeiro = primeiro->proximo;
        delete NodeTemp;
    }
    ultimo == NULL;
}

bool dynamicQueue::isEmpty(){
    return (primeiro == NULL); 
}

bool dynamicQueue::isFull(){
    try{
        Node *NewNode = new Node;
        delete NewNode;
        return false;
    }catch(bad_alloc exception){
        return true;
    }
}

void dynamicQueue::push(TipoItem item){
    if(!isFull()){
        Node *NewNode = new Node;
        NewNode->valor = item;
        NewNode->proximo = NULL;
        if(primeiro == NULL){
            primeiro = NewNode;
        }else{
            ultimo->proximo = NewNode;
        }
        ultimo = NewNode;
    }else{
        cout << "A fila esta cheia! Nao e' possivel adicionar mais elementos." << endl;
    }
}

TipoItem dynamicQueue::pop(){
    if(!isEmpty()){
        Node *NodeTemp = primeiro;
        primeiro = primeiro->proximo;
        TipoItem item = NodeTemp->valor;
        if(primeiro == NULL){
            ultimo = NULL;
        }
        delete NodeTemp;
        return item;
    }else{
        cout << "A fila esta vazia! Nao ha elementos para remover." << endl;
        return 0;
    }
}

void dynamicQueue::print(){
    Node *NodeTemp = primeiro;
    cout << "Fila: | ";
    while(NodeTemp != NULL){
        cout << NodeTemp->valor << " | ";
        NodeTemp = NodeTemp->proximo;
    }
    cout << endl;
    delete NodeTemp;
}

int dynamicQueue::size(){
    Node *NodeTemp = primeiro;
    int size;
    for(size = 0; NodeTemp != NULL; size++);
    return size;
}