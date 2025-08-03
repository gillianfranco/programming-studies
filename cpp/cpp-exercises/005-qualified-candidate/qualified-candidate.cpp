#include <iostream>
using namespace std;

bool verificaQualificacao(int idade, float renda){
    int idadeMin = 21;
    float rendaMin = 1200.00;

    if(idade >= idadeMin && renda < rendaMin)
        return true;
    else    
        return false;
}

int main(){
    int idade;
    float renda;
    bool verificacao;

    cout << "Informe sua idade: ";
    cin >> idade;

    cout << "Informe sua renda mensal: ";
    cin >> renda;

    verificacao = verificaQualificacao(idade, renda);
    if(verificacao == true)
        cout << "Candidato qualificado!";
    else
        cout << "Candidato nao e' qualificado!";

    system("pause >> NULL");

    return 0;
}