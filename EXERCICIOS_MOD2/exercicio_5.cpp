/*Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/
#include <iostream>
#include <locale.h>
using namespace std;
//definindo variaveis
int N;

int main(int argc, char** argv)
{
	setlocale(0, "");
	// entrada de um numero
	cout<< "entre com um numero qualquer"<< endl;
	cin >> N;
	//definindo vetores
	int A[N];
	int B[N];
	//entrada de valores para o vetor A
	for (int i=0; i < N; i++)
	{
		cout<< "entre com um numero para o vetor A"<< endl;
		cin >> A[i];
	}
	cout << " " << endl;
	//entrada de valores para vetor B
	for (int i=0; i < N; i++)
	{
		cout<< "entre com um numero para o vetor B"<< endl;
		cin >> B[i];
	}
	cout << " " << endl;
	// imprimindo vetor A
	cout << "VETOR A: ";
	for (int i=0; i < N; i++)
	{
		cout<< A[i]<<" ";
	}
	
	cout << " " << endl;
	//imprimindo vetor B
	cout << "VETOR B: ";
	for (int i=0; i < N; i++)
	{
		cout<< B[i]<<" ";
	}
	cout << " " << endl;
	// calculado a soma dos vetores  
	int soma[N];
	for (int i=0; i < N; i++)
	{
		soma[i] = (A[i]+B[i]);
	}
	
	cout << " " << endl;
	//imprimindo o vetor SOMA
	cout << "VETOR SOMA(A+B): ";
	for (int i=0; i < N; i++)
	{
		cout<< soma[i] << " ";
	}
	cout << " " << endl;
	return 0;
}