#include <iostream>
using namespace std;
 
int main() {
    int numero;
    
    do {
        cout << "Digite um numero positivo: ";
        cin >> numero;
        
        if(numero < 0) {
            cout << "Numero invalido! Tente novamente." << endl;
        }
    } while(numero < 0);
    
    cout << "Numero valido: " << numero << endl;
    
    return 0;
}