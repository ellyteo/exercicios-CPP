#include <iostream>

int main(){
	int idade = 0;
	
	std::cout << "Informe uma idade: ";
	std::cin >> idade;
	
	if(idade >= 18){
		std::cout << "Maior de idade" << std::endl;
	} else if(idade < 18){
		std::cout << "Menor de idade" << std::endl;
	} else{
		std::cout << "Idade: " << idade << " invalida" << std::endl;
	}
	
	return 0;
	
}