#include <iostream>
#include <cmath>
using namespace std;

int verificarDesenpenho(float mediaTurma, float notaAluno){
    if(notaAluno > mediaTurma)
        return 1;
    else if(notaAluno == mediaTurma)
        return 0;
    else
        return -1;
}

int main(){
    float mediaTurma;
    float notaAluno;

    cout << "Digite a media da turma: ";
    cin >> mediaTurma;

    cout << endl << "Digite a nota do aluno: ";
    cin >> notaAluno;

    int verificacao = verificarDesenpenho(mediaTurma, notaAluno);

    if(verificacao == 1)
        cout << endl << "O aluno esta' a cima da Media da turma." << endl;
    else if(verificacao == 0)
        cout << endl << "O aluno esta' na media da turma." << endl;
    else if(verificacao == -1)
        cout << endl << "O aluno esta' a baixo da media da turma" << endl;

    return 0;
}