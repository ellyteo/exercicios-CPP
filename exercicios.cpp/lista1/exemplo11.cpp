#include <iostream>
using namespace std;
 
int main() {
    int vetor[5];
    int soma = 0;
    
    cout << "Digite 5 valores inteiros:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
        soma += vetor[i]; 
    }
    
    cout << "Soma do vetor: " << soma << endl;
    
    return 0;
}