#include <iostream>
using namespace std;

float media(float a, float b, float c) {
	return (a+b+c)/3;
}


int main() {
	float nota1 = 7;
	float nota2 = 10;
	float nota3 = 7;
	cout << "Media igual a: " << media(nota1, nota2, nota3) << endl;
	return 0;
}