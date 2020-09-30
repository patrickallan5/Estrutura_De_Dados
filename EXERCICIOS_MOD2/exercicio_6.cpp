/*Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
m�dia de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura m�dia anual
d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia
anual*/
#include <iostream>
#include <locale.h>
using namespace std;
// definindo os dias do ano
#define tam 365
//definindo variaveis 
int temperaturas[tam];
float menor, maior, media;
float soma = 0;
int contador;

int main(int argc, char * * argv) {
	setlocale(0, "");
	//entrada da temperatuda do dia
	for (int i = 0; i < tam; i++) {
		cout << "entre com a temperatura do dia " << i+1 << ": " << endl;
		cin >> temperaturas[i];
		soma = soma + temperaturas[i];

	}
 	// verificando a menor temperatura do ano
	menor = temperaturas[0];
	for(int i = 0; i < tam; i++) {
		if (temperaturas[i] < menor) {
			menor = temperaturas[i];
		}
	}
	//verificando a maior temperatura do ano
	maior = temperaturas[0];
	for(int i = 0; i < tam; i++) {
		if (temperaturas[i] > maior) {
			maior = temperaturas[i];
		}
	}
	//verificando a temperatura media do ano 
	media = soma / tam;
	for(int i = 0; i < tam; i++) {
		if (temperaturas[i] < media) {
			contador++;
		}
	}
	//imprimindo respostas 
	cout << " " <<endl;
	cout << "MENOR TEMPERATURA DO ANO FOI: " << menor << "�" << endl;
	cout << "MAIOR TEMPERATURA DO ANO FOI: " << maior << "�" << endl;
	cout << "TEMPERATURA M�DIA DO ANO FOI: " << media << "�" << endl;
	cout << "N�MEROS DE DIAS QUE A TEMPERATURA FOI INFERIOR A M�DIA � DE: " << contador<< " DIAS" << endl;
	return 0;
}
