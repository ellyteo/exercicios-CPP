#include <iostream>
using namespace std;
 
int main() {
    int matriz[2][3];

    cout << "Digite os valores da matriz 2x3:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    

    cout << "Matriz 2x3:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }
    
    return 0;
}