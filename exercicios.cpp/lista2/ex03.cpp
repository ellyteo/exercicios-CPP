#include <iostream>
using namespace std;

int maior(int a, int b) {
	if(a > b)
		return a;
	else
		return b;
}

int main() {
	int x = 10;
	int y = 20;
	cout << "Maior: " << maior(x, y) << endl;
	return 0;
}