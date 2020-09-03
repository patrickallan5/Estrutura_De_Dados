#include <iostream>
using namespace std;

int main(){
	float numHrTra;
	float salaMin;
	float salaBruto;
	float imposto;
	float valorHRTra;
	float salaReceb;
	
	cout << "entre com as horas trabalhadas" << endl;
	cin >> numHrTra;
	cout << "entre com o valor do salario minimo" << endl;
	cin >> salaMin;
	
	valorHRTra = (salaMin / 2);
	
	salaBruto = (numHrTra * valorHRTra);
	
	imposto = ( salaBruto * 0.03);
	
	salaReceb = (salaBruto - imposto);
	
	cout << "salario a receber " << salaReceb <<"R$" << endl;
	
}