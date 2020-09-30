/*Faça um programa em C++ para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa.*/
#include <iostream>
#include <locale.h>
//definindo tamanho
#define tam 20
using namespace std;
//definindo variaveis
int NUM[tam];
int n= tam;
int main(int argc, char** argv)
{
	setlocale(0, "");
	// entrada de valores 
	for (int i=0; i<tam; i++)
	{
		cout << "entre com um numero" << endl;
		cin >> NUM[i];
	}
	//imprimindo valores
	cout << "" << endl;
	cout << "NUMEROS: ";
	for (int i=0; i<tam; i++)
	{
		cout << NUM[i]<< " ";
	}
	// invertendo numeros 
	cout << "" << endl;
	cout << "" << endl;
	cout << "NUMEROS INVERTIDOS: ";
	
	for ( int i = n - 1; i >= 0; i--)
	{
		cout<< NUM[i] << " ";
	}
		
	cout << "" << endl;
	return 0;
}