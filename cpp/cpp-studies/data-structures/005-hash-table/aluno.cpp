#include "aluno.h"

Aluno::Aluno(){
    ra = -1;
    nome = " ";
}

Aluno::Aluno(int ra, string nome){
    this->ra = ra;
    this->nome = nome;
}

int Aluno::getRa(){
    return ra;
}

string Aluno::getNome(){
    return nome;
}