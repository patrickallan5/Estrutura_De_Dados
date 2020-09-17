#include <iostream>
#include <locale.h>
using namespace std;

// definindo a funcao

void alo(void)
{
	cout << "funcao simples" << endl;
}

// progama principal

int main()
{
	setlocale(0, "");
	alo();
	return 0;
}
