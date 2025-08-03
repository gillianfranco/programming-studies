#include <iostream>
#include <cmath>
using namespace std;

#define TRUE 1;
#define FALSE 0;

int main(){
    int cateto1, cateto2, hipotenusa, n, achou;

    cout << "Digite o comprimento máximo da Hipotenusa: ";
    cin >> n;

    for(hipotenusa = 1; hipotenusa < n; hipotenusa++){
        achou = FALSE;
        for(cateto1 = 1; cateto1 < hipotenusa && !achou; cateto1++){
            cateto2 = cateto1;
            while(pow(cateto1, 2) + pow(cateto2, 2) != hipotenusa)
                cateto2++;
            if(pow(cateto1, 2) + pow(cateto2, 2) == pow(hipotenusa, 2)){
                cout << "A soma dos catetos " << cateto1 << " e " << cateto2 << " é " << hipotenusa;
                achou = TRUE;
            }
        }
    }

    return 0;
}