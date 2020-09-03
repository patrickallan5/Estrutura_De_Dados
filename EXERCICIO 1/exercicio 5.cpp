#include <iostream>
using namespace std;

int main(){
	float PE;
	int CP;
	
	cout << "ENTRE COM O VALOR DA ETIQUETA " << endl;
	cin >> PE;
	
	cout << "_____________________FORMAS DE PAGAMENTO________________________" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "(1)  " << "A vista em dinheiro ou cheque, com 10% de desconto" << endl;
	cout << "(2)  " << "A vista com cartao de credito, com 5% de desconto" << endl;
	cout << "(3)  " << "em 2 vezes, preço normal de etiqueta sem juros" << endl;
	cout << "(4)  " << "em 3 vezes, preço de etiqueta com acrescimo de 10%" << endl;
	cout << " " << endl;
	cout << "QUAL A FORMA DE PAGAMENTO " << endl;
	cin >> CP;
	
	switch(CP)
	{
	case (1):
		cout << " VALOR A PAGAR: " << (PE * 0.9 ) << "R$" << endl;
		
		break;
	case (2):
		cout << "VALOR A PAGAR: " << (PE * 0.95) << "R$" << endl;
		break;
	case (3):
		cout << "VALOR A PAGAR: " << "2 PARCELAS DE " <<( PE/2) << "R$" << endl;
		break;
	case (4):
		cout << "VALOR A PAGAR: " << "3 PARCELAS DE " << ((PE * 1.10) / 3 ) << "R$" << endl;
		break;
	default:
		cout << "OPCAO INVALIDA" << endl;
		break;
	}
	
}