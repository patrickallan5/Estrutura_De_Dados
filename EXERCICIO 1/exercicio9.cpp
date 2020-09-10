/* Faça um programa em C++ que leia dez conjuntos de dois valores, o primeiro
representando o número do aluno e o segundo a sua altura em centímetros.
Encontre o aluno mais alto e o mais baixo. Exiba o número do aluno mais
baixo o número de aluno mais alto e as respectivas alturas.*/

# include <iostream>
using namespace std;
#define tam 10
int num_aluno[tam];
float altura[tam];
float maior ;
int pos_maior;
float menor ;
int pos_menor;
	

int main(int argc, char** argv)
{
	for(int i=0; i < tam; i++){
		cout << "entre com o numero do aluno" << endl;
		cin >> num_aluno[i];
		cout << "entre com a aultura do aluno" << endl;
		cin >> altura[i];
	}	
	maior = altura[0];
	for(int i=0; i < tam; i++){	
		if (altura[i] > maior){
			maior = altura[i];
			pos_maior = i;}
	}	
	menor = altura[0];	
	for(int i=0; i < tam; i++){	
		if (altura[i] < menor){
			menor = altura[i];
			pos_menor = i;}
	}		
		
	cout << "maior aluno eh " << num_aluno[pos_maior] << " com " << maior << endl;	
	cout << "menor menor eh " << num_aluno[pos_menor] << " com " << menor << endl;		
	return 0;  
    }
	