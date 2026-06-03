#include <iostream>

int main(){
	const int tamanho = 6;
	int guardiao = 0;
	int megaSena[tamanho] = {0,0,0,0,0,0};
	
	for(int posicao = 0; posicao < tamanho; posicao++){
	std::cout << "Informe um numero:" << std::endl;
	std::cin >> megaSena[posicao];		
	}
	
	std::cout << "Numeros jogados - no sorteio 06/2026" << std::endl;
	while(guardiao < tamanho){
		std::cout << megaSena[guardiao] << " - ";
		guardiao++;
	}
	
	return 0;
}