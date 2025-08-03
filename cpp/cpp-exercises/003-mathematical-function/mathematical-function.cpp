#include <iostream>
#include <cmath>
using namespace std;

int calculaFuncao(int x){
    return pow(x, 2) - (3 * x) + 5;
}

int main(){
    int a = 10;
    int res = calculaFuncao(a);

    cout << res << endl;

    return 0;
}