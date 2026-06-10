#include <iostream>
using namespace std;

float areaRetangulo(float largura, float altura) {
	return largura * altura;
}

void exibirResultado(float largura, float altura, float area) {
	cout << "------Resultado------" << endl;
	cout << "Largura: " << largura << endl;
	cout << "Altura: " << altura << endl;
	cout << "Area do retangulo: " << area << endl;
}

void imprimirLinha() {
	for(int i = 0; i < 40; i++){
	cout << "=";	
	}
	cout << endl;
}

int main() {
	float largura, altura;
	
	imprimirLinha();
	cout << "Calculadora de area de retangulo" << endl;
	imprimirLinha();
	
	cout << "Digite a largura:";
	cin >> largura;
	
	cout << "Digite a altura:";
	cin >> altura;
	
	float area = areaRetangulo(largura, altura);
	exibirResultado(largura, altura, area);
	imprimirLinha();
	
	return 0;
}