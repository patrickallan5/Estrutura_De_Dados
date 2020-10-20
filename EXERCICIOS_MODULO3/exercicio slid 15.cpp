#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

using namespace std;

struct pessoas {
	char nome[20];
	char endereco[20];
	char cpf[20];
	char idade[3];
};

int main(int argc, char * * argv) {
	pessoas nomes[4];
	pessoas end[4];
	pessoas cpfs[4];
	pessoas idad[4];

	for (int i = 0; i < 4; i++) {
		cout << "entre com o nome da " << i+1 << " pessoa" << endl;
		gets(nomes[i].nome);
		cout << "entre com o endereo da " << i+1 << " pessoa" << endl;
		gets(end[i].endereco);
		cout << "entre com o cpf da " << i+1 << " pessoa" << endl;
		gets(cpfs[i].cpf);
		cout << "entre com o idade da " << i+1 << " pessoa" << endl;
		gets(idad[i].idade);
	}
	for (int i = 0; i < 4; i++) {
		printf("NOME:");
		printf(nomes[i].nome);
		printf(" | ");
		printf("ENDERECO:");
		printf(end[i].endereco);
		printf(" | ");
		printf("CPF:");
		printf(cpfs[i].cpf);
		printf(" | ");
		printf("IDADE:");
		printf(idad[i].idade);
		cout << " " << endl;	
	}
	return 0;
}
