#include <iostream>
#include <math.h>
using namespace std;

int soma(int n) {
	int soma = 0;
	for (int i = 0; i <= n; i++) {
		soma += i;
	}
	return soma;
}

int produto(int n) {
	int produto = 0;
	for (int i = 0; i <= n; i++) {
		produto *= i;
	}
	return produto;
}

int produtorio(int n) {
	const int a = 1;
	const int q = 2;
	int produtorio;

	produtorio = a * pow(q, (n-1));

	return produtorio;
}

int main() {

	int n;
	int escolha;

	cout << "Escolha um numero n: \n";
	cin >> n;
	
	cout << "Que operacao voce deseja fazer?\n\n" <<
		"1 - Soma dos numeros naturais ate n\n" << 
		"2 - Produto dos numeros naturais ate n\n" <<
		"3 - Produtorio dos n primeiros termos de uma pg cujo primeiro termo e a = 1 e a razao e q = 2\n\n";

	cin >> escolha;

	if (escolha == 1) {
		int auxsoma;
		auxsoma = soma(n);
		cout << "A soma da " << auxsoma << endl; 
	}
	else if (escolha == 2) {
		int auxproduto;
		auxproduto = produto(n);
		cout << "O produto da " << auxproduto << endl;
	}
	else if (escolha == 3) {
		int auxprodutorio;
		auxprodutorio = produtorio(n);
		cout << "O produtorio da " << auxprodutorio << endl;
	}

	cout << endl;

	system("PAUSE");
}