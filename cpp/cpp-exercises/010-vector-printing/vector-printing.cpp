#include <iostream>
using namespace std;

int main(){
    int size, verify;

    do{
        cout << "Type the size for the vector: ";
        cin >> size;
        cout << endl;

        int *vector = new int[size];

        cout << "--- Insertion of Values ---" << endl;
        for(int i = 0; i < size; i++){
            cout << "Type a value for position [" << i << "]: ";
            cin >> vector[i];
        }

        cout << "\n--- Values Inserted ---" << endl;
        for(int i = 0; i < size; i++){
            cout << "Position [" << i << "] -> Value [" << vector[i] << "]" << endl;
        }

        do{
            cout << "\nType 0 to finish the programe or type 1 to continue: ";
            cin >> verify;
            cout << endl;
        }while(verify != 0 && verify != 1);
        if(verify == 0){
            delete [] vector;
        }
    }while(verify != 0);

    return 0;
}