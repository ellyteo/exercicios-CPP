#include <iostream>
using namespace std;
 
int main() {
    int vetor[5];
    
    cout << "Digite 5 valores inteiros:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Posicao " << i << ": ";
        cin >> vetor[i];
    }
    
    cout << "Valores digitados: ";
    for(int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}