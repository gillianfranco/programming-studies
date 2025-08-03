#include "hash.h"

int Hash::funcaoHash(Aluno aluno){
    return (aluno.getRa() % max_posicoes);
}

Hash::Hash(){}

Hash::~Hash(){}

bool Hash::isFull(){}

int Hash::getSize(){}

void Hash::push(Aluno aluno){}

void Hash::toDelete(Aluno aluno){}

void Hash::search(Aluno &aluno, bool &result){}