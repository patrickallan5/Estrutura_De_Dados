/*Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a média da turma e contar quantos alunos
obtiveram nota acima desta média calculada. Escrever a média da turma
e o resultado da contagem.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>
using namespace std;
 //definindo tamanho
#define tam 20
//definindo quantidades de char para cada posiçao do vetor
struct sala
{
	char alunos[20];
};
//defininfo variaveis
float notas[tam];
float soma = 0 ;
float media;
int contador=0;
float temp;


int main(int argc, char** argv)
{
	setlocale(0, "");
	//definindo vetores
	struct sala a[tam];;
	//entrada de valores no vetor
	for (int i=0;i<tam;i++)
	{
		fflush(stdin);
		printf("Digite um aluno ");
		gets(a[i].alunos);
		int x =0;
		//entrada de notas 
		while(x==0)
		{
			printf("entre com a nota ");
			cin >> temp;
			if (temp > 0 && temp < 11)
			{
			    notas[i] = temp;
			    soma+=temp;
				x=1; 
			}else 
			{
				cout<< "notas tem que estar entre 0 e 10 " << endl;
			}
		}
	
	} 
	// calculando a media 
	media = soma/tam;
	for (int i=0;i<tam;i++)
	{
		if (notas[i] > media)
		{
			contador++;
		}
	}
	// imprimindo resposta
	cout << "A media da turma é " << media << endl;
	cout << contador << " Alunos tiveram nota acima da media "<< endl;
	
	return 0;
}