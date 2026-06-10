#include <iostream>
using namespace std;

void imprimirLinha() {
	for(int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << endl;
}

int main() {
	imprimirLinha();
	cout << "oi" << endl;
	imprimirLinha();
	return 0;
}