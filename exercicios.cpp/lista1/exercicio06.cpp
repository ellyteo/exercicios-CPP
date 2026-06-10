#include <iostream>

int main(){
	
char opcao;

std::cout << "Informe uma opcao entre A - B - C:";
std::cin >> opcao;

switch (opcao) {
	case 'A':
			case 'a':
		std::cout << "Opcao A selecionada";
		break;
	case 'B':
			case 'b':
		std::cout << "Opcao B selecionada";
		break;
	case 'C':
			case 'c':
		std::cout << "Opcao C selecionada";
		break;
	default:
		std::cout << "Opcao invalida";
}
}