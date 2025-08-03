#include <iostream>
using namespace std;

int main(){
    int r, c;

    r = 0;
    c = 0;
    
    cout << "Type the number of rows in the arrays: ";
    cin >> r;
    cout << "Type the number of columns in the arrays: ";
    cin >> c;

    int firstArray[r][c];
    int secondArray[r][c];

    cout << endl << "--- Array 1 ---" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Type a number for position [" << i << "][" << j << "] for the array [1]: ";
            cin >> firstArray[i][j];
        } 
    }
    cout << endl;

    cout << endl << "--- Array 2 ---" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Type a number for position [" << i << "][" << j << "] for the array [2]: ";
            cin >> secondArray[i][j];
        }
    }
    cout << endl;

    int arraySum[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; i++){
            arraySum[i][j] = firstArray[i][j] + secondArray[i][j];
            cout << firstArray[i][j] << " + " << secondArray[i][j] << " = " << arraySum[i][j] << endl;
        }
    }
 
    return 0;
}