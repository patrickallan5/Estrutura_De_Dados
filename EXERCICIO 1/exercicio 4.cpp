#include <iostream>
using namespace std;

int main(){
	float salario;
	cout << "Entre com seu salario" << endl ;
	cin >> salario;
	if (salario < 1000){
		cout << "SEU NOVO SALARIO EH " << (salario + (salario * 0.15)) << endl;
	}
	else if (salario <= 1500){
		cout << "SEU NOVO SALARIO EH " <<(salario +(salario * 0.10)) << endl;
	}
	else {
		cout << "SEU SALARIO NOVO EH " << (salario + (salario * 0.25)) << endl;
	}
	
}