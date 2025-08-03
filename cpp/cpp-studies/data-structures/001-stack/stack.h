#include <iostream>
using namespace std;
typedef int TipoItem;
const int max_itens = 100;

class stack{
    private: 
    int tamanho;
    TipoItem *estrutura;

    public:
    stack();
    ~stack();
    bool isFull();
    bool isEmpty();
    void push(TipoItem item);
    TipoItem pop();
    void print();
    int size();
};