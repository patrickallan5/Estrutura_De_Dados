/*Ler um vetor A de 10 números. Após, ler mais um número e guardar em
uma variável X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.*/

#include <iostream>
#include <locale.h>

using namespace std;
//definindo tamanho
#define tam 10
//definindo variaveis 
int A[tam];
int x;
int M[tam];

int main(int argc, char** argv)
{
	setlocale(0, "");
	//entrada de valores para vetor A
	for (int i=0; i<tam; i++)
	{
		cout << "entre com um numero" << endl;
		cin >> A[i];
	}
	//imprimindo vetor A
	cout<<" "<<endl;
	cout<<"VETOR A:";
	for (int i=0; i<tam; i++)
	{
		cout << A[i] << " ";	
	}
	//entrada do numero para multiplicaçao 
	cout<< " " <<endl; 
	cout << "entre com um numero a ser calculado " << endl;
	cin >> x;
	// calculando multiplicaçao armazenando no vetor M
	for (int i=0; i<tam; i++)
	{
		M[i]= A[i]*x;
	}
	// imprimindo vetor M
	cout<<" "<<endl;
	cout<<" VETOR M: ";
	for (int i=0; i<tam; i++)
	{
		cout<< M[i] << " ";
	}
	cout<<" "<<endl;
	return 0;
}