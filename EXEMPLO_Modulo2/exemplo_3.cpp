#include <iostream>
#include <locale.h>

using namespace std;

int quadrado (int num);
int main()
{
	setlocale(0, "");
	int l1, l2, l3;
	cout << "Digite o valor do lano 1: " << endl;
	cin >> l1;
	cout << "Digite o valor do lado 2: " << endl;
	cin >> l2;
	cout << "Digite o valor do lado 3: " << endl;
	cin >> l3;


	if (l1 > 0 && l2 > 0 && l3 > 0 &&
			quadrado(l1) + quadrado(l2) == quadrado(l3) ||
			quadrado(l2) + quadrado(l3) == quadrado(l3) ||
			quadrado(l3) + quadrado(l1) == quadrado(l2))

	{
		cout << " " << l1 << " " << l2 << " " << l3 << " podem formar um triangulo reto " << endl;
	}
	else
	{
		cout << " " << l1 << " " << l2 << " " << l3 << " nao podem formar um triangulo reto " << endl;
	}

	return 0;
}
int quadrado (int num)
{
	return num * num;
}
