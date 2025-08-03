#include <iostream>
using namespace std;

typedef int TipoItem;

struct Node{
    TipoItem valor;
    Node *proximo;
};

class dynamicQueue{
    private:
    Node *primeiro;
    Node *ultimo;

    public:
    dynamicQueue();
    ~dynamicQueue();
    bool isEmpty();
    bool isFull();
    void push(TipoItem item);
    TipoItem pop();
    void print();
    int size();
};