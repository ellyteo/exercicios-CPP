#include <iostream>
#include <string>
using namespace std;

const int maxProdutos = 10;

string nomes[maxProdutos];
int codigos[maxProdutos];
float precos[maxProdutos];
int totalProdutos = 0;

void adicionarProduto();
void removerProduto();
void atualizarProduto();
void buscarProduto();
void listarProdutos();
void exibirProduto();
bool codigoExistente(int codigo);
int buscarProdutoCodigo(int codigo);

bool codigoExistente(int codigo) {
	for(int i = 0; i < totalProdutos; i++) {
		if(codigos[i] == codigo) {
			return true;
		}
	}
	return false;
}

int buscarProdutoCodigo(int codigo){
	for(int i = 0; i < totalProdutos; i++) {
		if(codigos[i] == codigo){
			return i;
		}
	}
	return -1;
}

void adicionarProduto() {
	if(totalProdutos >= maxProdutos) {
		cout << "Erro: Catalogo cheio!" << endl;
		return;
}
	int codigo;
	cout << "------Adicionar Produto------" << endl;
	cout << "Codigo: ";
	cin >> codigo;
	
	if(codigoExistente(codigo)) {
		cout << "Codigo ja cadastrado!" << endl;
		return;
	}
	
	codigos[totalProdutos] = codigo;
	
	cout << "Nome: ";
	cin >> nomes[totalProdutos];
	
	cout << "Preco: ";
	cin >> precos[totalProdutos];
	
	totalProdutos++;
	cout << "Produto cadastrado!" << endl;
	
}

void removerProduto() {
	if(totalProdutos == 0) {
		cout << "Catalogo vazio!" << endl;
		return;
	}
	
	int codigo;
	cout << "------Remover Produto------" << endl;
	cout << "Codigo do produto: ";
	cin >> codigo;
	
	int posicao = buscarProdutoCodigo(codigo);
	
	if(posicao == -1) {
		cout << "Produto não encontrado!" << endl;
		return;
	}
		for(int i = posicao; i < totalProdutos - 1 ; i++) {
			codigos[i] = codigos[i + 1];
			nomes[i] = nomes[i + 1];
			precos[i] = precos[i + 1];
		}
		
		totalProdutos--;
		cout << "Produto removido!" << endl;
		return;
	
}

	void atualizarProduto() {
		if(totalProdutos == 0) {
			cout << "Catalogo vazio!" << endl;
			return;
	}
	
	int codigo;
	cout << "------Atualizar produtos------";
	cout << "Codigo do produto: ";
	cin >> codigo;
	
	int posicao = buscarProdutoCodigo(codigo);
	
	if(posicao == -1) {
		cout << "Produto não encontrado!" << endl;
		return;
	}
	
	cout << "Novo nome (" << nomes[posicao] << "):";
	cin >> nomes[posicao];
	
	cout << "Novo preco (" << precos[posicao] << "):";
	cin >> precos[posicao];
	
	cout << "Produto atualizado!";
	
}

void buscarProduto() {
	if(totalProdutos == 0) {
		cout << "Produto não encontrado!" << endl;
		return;
	}
	
	int codigo;
	cout << "------Buscar Produto------" << endl;
	cout << "Codigo do produto: ";
	cin >> codigo;
	
	int posicao = buscarProdutoCodigo(codigo);
	
	if(posicao == -1) {
		cout << "Produto não encontrado!" << endl;
		return;
	}
	
	cout << "Produto Encontrado: " << endl;
	cout << "Codigo: " << codigos[posicao] << endl;
	cout << "Nome: " << nomes[posicao] << endl;
	cout << "Preco: " << precos[posicao] << endl;
}

void listarProdutos() {
	if(totalProdutos == 0) {
		cout << "Catalogo vazio!" << endl;
		return;
	}
	
	cout << "------Catalogo de Produtos------" << endl;
	for(int i = 0; i < totalProdutos; i++){
		cout << "Codigo: " << codigos[i]
			<< " Nome: " << nomes[i]
			<< " Preco: R$ " << precos[i] << endl;
	}
}
	
	void exibirMenu() {
		cout << "------Menu------" << endl;
		cout << "1. Adicionar produto" << endl;
		cout << "2. Remover produto" << endl;
		cout << "3. Atualizar produto" << endl;
		cout << "4. Buscar produto" << endl;
		cout << "5. Listar produtos" << endl;
		cout << "0. Sair" << endl;
		cout << "Opcao: ";
	}
	
	int main() {
		int opcao = -1;
		
		while(opcao != 0){
			exibirMenu();
			cin >> opcao;
			
			if(opcao == 1) {
				adicionarProduto();
			} else if (opcao == 2) {
				removerProduto();
			} else if (opcao == 3) {
				atualizarProduto();
			} else if (opcao == 4) {
				buscarProduto();
			} else if (opcao == 5) {
				listarProdutos();
			} else if (opcao == 0) {
				cout << "Saindo.." << endl;
			} else {
				cout << "Opcao invalida!" << endl;
			}
		}
		
		return 0;
	}
