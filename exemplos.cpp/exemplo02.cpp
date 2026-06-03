#include <iostream>

int main(){
	int x = 0;
	int y = 0;
	std::cout << "Informe um numero";
	std::cin >> x;
	std::cout << std::endl << "Informe outro numero";
	std::cin >> y;
	std::cout << "Soma: " << x + y << std::endl;
	std::cout << "Subtracao: " << x - y << std::endl;
	std::cout << "Multiplicacao: " << x * y << std::endl;
	if(y == 0){
		std::cout << "Nao e possivel fazer divisao por zero";
	}else{
		std::cout << "Divisao: " << x / y << std::endl;
	}
	std::cout << "Resto: " << x % y << std::endl;
}