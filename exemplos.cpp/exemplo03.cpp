#include <iostream>
#include <string>

int main(){
	char opcao;
	
	std::cout << "Informe uma letra: ";
	std::cin >> opcao;
	
	if(opcao == 'j'|| opcao == 'J'){
		std::cout << "voce digitou a letra j" << std::endl;
	} else{
		std::cout << "opcao: " << opcao << " invalida" << std::endl;
	}
	
	std::string nome = "";
	std::cout << "Informe um nome:";
	std::cin >> nome;
	std::cout << "Nome digitado: " << nome << std::endl;
	
	return 0;
	
}