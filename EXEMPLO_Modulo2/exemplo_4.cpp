#include <iostream>
#include <locale.h>

using namespace std;

int obterValor (){	
	int valor;
	cout << "Digite um valor ;" << endl;
	cin >> valor;
	return valor;
}

int main(int argc, char** argv)
{
	setlocale(0, "");
	int a , b;
	a = obterValor();
	b = obterValor();
	
	cout << " A soma é: " << a+ b << endl;

	return 0;
}