#include <iostream>

int main(){
	int nota = 0;
	
	std::cout << "Informe a nota: ";
	std::cin >> nota;
	
	if(nota == 100 || nota >= 90){
		std::cout << "Execelente" << std::endl;
	} else if(nota >= 70){
		std::cout << "Bom" << std::endl;
	} else if(nota < 70){
		std::cout << "Precisar melhorar" << std::endl;
	}else{
		std::cout << "Nota: " << nota << " invalida" << std::endl;
	}
	
	return 0;
	
}