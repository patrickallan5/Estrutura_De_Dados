/* Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário. */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

using namespace std;
//definindo tamanhos
#define tam 10
#define ta 1
//definindo variaveis
int x;
// definindo quantidades de char em cada posiçao do vetor
struct nomes
{
	char nome[20];
	char pesq[20];
};



int main(int argc, char** argv)
{
	setlocale(0, "");
	//definido os vetores 
	struct nomes p[tam];
	struct nomes pe[ta];
	// entrada de valores para o vetor de nomes
	for (int i=0;i<tam;i++)
	{
		fflush(stdin);
		printf("Digite um nome ");
		gets(p[i].nome);
	} 
	//entrada de valor a pesquisar
	fflush(stdin);
	printf("Digite um nome para pesquisa ");
	gets(pe[0].pesq);
	
	//comparando valores
	fflush(stdin);
	for (int i=0; i<tam; i++)
	{
		if (strcmp(pe[0].pesq, p[i].nome ) == 0)
		{
			x++;
		}
	}	
	// imprimindo resultado da pesquisa
	if (x!=0)
	{
		cout<< "ACHEI" << endl;
	}else
	{
		cout << "NAO ACHEI" << endl;
	}
	

	return 0;
}
	
