#include <iostream>
using namespace std;

void trocar(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 5;
	int y = 10;
	cout << "Antes: x= " << x << ", y= " << y << endl;
	trocar(x, y);
	cout << "Depois: x= " << x << ", y= " << y << endl;
	return 0;
}