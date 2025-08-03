#include <iostream>
using namespace std;
const int max_itens = 100;
typedef int TipoItem;

class queue{
    private:
    TipoItem *estrutura;
    int primeiro, ultimo;

    public:
    queue();
    ~queue();
    bool isFull();
    bool isEmpty();
    void enqueue(TipoItem item);
    TipoItem dequeue();
    void print();
    int size();
};