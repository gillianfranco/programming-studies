#include <iostream>
#include "queue.h"
using namespace std;

queue::queue(){
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}
queue::~queue(){
    delete [] estrutura;
}
bool queue::isFull(){
    return ultimo - primeiro == max_itens; // A fila está cheia quando a diferença entre a posição do primeiro e do último elemento for igual ao tamanho máximo da fila
}
bool queue::isEmpty(){
    return primeiro == ultimo; // Se a primeira e a última posição estiverem apontando para o mesmo local, quer dizer que a pilha está vazia
}
void queue::enqueue(TipoItem item){
    if(!isFull()){
        estrutura[ultimo % max_itens] = item; // Conforme removemos alguns elementos no início do vetor, para reutilizarmos aquelas posições do início e respeitar a quantidade de elementos definida para o vetor, fazemos isso. Exemplo: Se tivessemos removido dois elementos (na posição 0 e 1) e depois a fila ficasse cheia, o último estaria na posição 1 e o primeiro elemento estaria na posição 2, pois o resto da divisão da variável 'ultimo' (valor = 102) com a constante 'max_itens' (valor = 100) é igual a 2
        ultimo++;
    }else{
        cout << "A fila esta cheia! Nao e' possivel inserir mais elementos." << endl;
    }
}
TipoItem queue::dequeue(){
    if(!isEmpty()){
        primeiro++;
        return estrutura[(primeiro - 1) % max_itens];
    }else{
        cout << "A fila esta vazia! Nao ha elementos para serem removidos." << endl;
    }
}
void queue::print(){
    cout << "Fila: | ";
    for(int i = primeiro; i < ultimo; i++){
        cout << estrutura[i % max_itens] << " | ";
    }
    cout << endl;
}
int queue::size(){
    return ultimo - primeiro;
}