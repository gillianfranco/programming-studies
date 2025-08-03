#include <iostream>
#include <string.h>
using namespace std;

class Aluno{
    private:
    int ra;
    string nome;

    public:
    Aluno();
    Aluno(int ra, string nome);
    int getRa();
    string getNome();
};