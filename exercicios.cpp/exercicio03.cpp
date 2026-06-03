#include <iostream>

int main(){
	int x = 0;
	int y = 0;
	std::cout << "Informe um numero";
	std::cin >> x;
	std::cout << std::endl << "Informe outro numero";
	std::cin >> y;
	std::cout << "Soma: " << x + y << std::endl;
}