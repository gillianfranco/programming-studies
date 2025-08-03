#include <iostream>
#include "stack.h"
using namespace std;

stack::stack(){
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

stack::~stack(){
    delete [] estrutura;
}

bool stack::isFull(){
    return (tamanho == max_itens);
}

bool stack::isEmpty(){
    return (tamanho == 0);
}

void stack::push(TipoItem item){
    if(!isFull()){
        estrutura[tamanho] = item;
        tamanho++;
    }else{
        cout << "A pilha esta cheia! Nao e' possivel inserir mais elementos." << endl;
    }
}

TipoItem stack::pop(){
    if(!isEmpty()){
        tamanho--;
        return estrutura[tamanho];
    }else{
        cout << "A pilha esta vazia! Nao ha elementos para remover." << endl;
        return 0;
    }
}

void stack::print(){
    cout << "Pilha: | ";
    for(int i = 0; i < tamanho; i++){
        cout << estrutura[i] << " | ";
    }
    cout << endl;
}

int stack::size(){
    return tamanho;
}