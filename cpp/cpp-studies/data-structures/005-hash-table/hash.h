#include <iostream>
#include "aluno.h"
using namespace std;

class Hash{
    private:
    int funcaoHash(Aluno aluno);
    int max_itens;
    int max_posicoes;
    int qtde_itens;
    Aluno *estrutura;

    public:
    Hash();
    ~Hash();
    bool isFull();
    int getSize();
    void push(Aluno aluno);
    void toDelete(Aluno aluno);
    void search(Aluno &aluno, bool &result);
};