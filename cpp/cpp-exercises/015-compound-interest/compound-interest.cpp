#include <iostream>
#include <cmath>
using namespace std;

class rentabilidade{
    private: 
    float mInicial, M, C, i;
    int t;

    public:
    void setMontanteInicial(float M=0){
        this->M = M;
        mInicial = this->M;
    }
    void setCapitalInvestido(float C=0){
        this->C = C;
    }
    void setPorcentagemRentabilizada(float i=0){
        this->i = i;
    }
    void setPeriodoDeTempo(int t=0){
        this->t = t;
    }

    float getMontanteInicial(){
        return mInicial;
    }
    float getCapitalInvestido(){
        return C;
    }
    float getPorcentagemRentabilizada(){
        return i;
    }
    int getPeriodoDeTempo(){
        return t;
    }
    float getEvolucaoDoPatrimonio(){
        this->M += C * pow(1 + i, t);
        return M;
    }
};

int main(){
    float *M = new float;
    float *C = new float;
    float *i = new float;
    int *t = new int;

    rentabilidade VALE3;

    cout << "Digite o montante inicial: ";
    cin >> *M;
    VALE3.setMontanteInicial(*M);

    cout << "Digite o periodo de tempo (em meses): ";
    cin >> *t;
    VALE3.setPeriodoDeTempo(*t);

    cout << "Digite capital investido no periodo: ";
    cin >> *C;
    VALE3.setCapitalInvestido(*C);

    cout << "Digite a porcentagem (em decimal) no periodo: ";
    cin >> *i;
    VALE3.setPorcentagemRentabilizada(*i);

    cout << "\n\n --- Acao da Vale -> " << VALE3.getEvolucaoDoPatrimonio() << " --- \n";
    cout << "Montante Inicial: " << VALE3.getMontanteInicial() << " reais\n";
    cout << "Tempo: " << VALE3.getPeriodoDeTempo() << " meses\n";
    cout << "Capital Investido: " << VALE3.getCapitalInvestido() << " reais\n";
    cout << "Lucro em porcentagem: " << VALE3.getPorcentagemRentabilizada() << endl;

    delete M;
    delete C;
    delete i;
    delete t;
    cout << M << endl;

    system("pause >> NULL");

    return 0;
}