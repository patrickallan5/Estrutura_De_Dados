#include <iostream>
using namespace std;

int main(){
	float peso;
	float altura;
	float IMC;
	cout << "entre com o seu peso" << endl;
	cin >> peso;
	cout << "entre com sua altura" << endl;
	cin >> altura;
	
	IMC = peso / (altura * altura);
	if (IMC < 20){
		cout << "ABAIXO DO PESO" << endl;
	}
	if (IMC < 25){
		cout << "PESO IDEAL" << endl;
	}
	else {
		cout << "ACIMA DO PESO"	<< endl;
	}
	return 0;

}