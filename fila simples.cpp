#include <iostream>
#include <locale.h>
using namespace std;
// criando as variaveis e vetores(pilha)
int inicio = 0;
int fim =0;
int num=0;
int fila[5];
// criando metodo insercao
int entrada (){
	if(fila[4] != NULL){
		cout << "FILA CHEIA" << endl;
	}else{
		fila[fim] =num;
	    fim++;
	    for ( int f = 0; f < fim; f++){
			cout << fila[f] << "," << endl;
		}
  	  
	};
}
// criando metodo retirada
int saida (){
	if(fila[inicio] == NULL){
		cout << "FILA VAZIA" << endl;
	}else{
		fila[inicio]= NULL;
		inicio++;
		for ( int f = inicio ; f < fim ; f++){
			cout << fila[f] << "," << endl;
			
		}
	};
}


int main(int argc, char** argv)
{
	setlocale(0, "");
	if(fila[fim] == NULL){
		cout << "FILA VAZIA" << endl;}
	// primeiro a entrar (10)
	num = 10;
	cout << "1º da fila........... " << endl;
	cout << endl;
	entrada();
	cout << endl;
	
	// segundo a entrar (20)
	num = 20;
	cout << "2º da fila .........." << endl;
	cout << endl;
	entrada();
	cout << endl;
	
	// terceiro  a entrar (30)
	num = 30;
	cout << "3º da fila.......... " << endl;
	cout << endl;
	entrada();
	cout << endl;;
	
	// quarto a entrar (40)
	num = 40;
	cout << "4º da fila........ " << endl;
	cout << endl;
	entrada();
	cout << endl;
	
	// quinto a entrar (50)
	num = 50;
	cout << "5º da fila.......... " << endl;
	cout << endl;
	entrada();
	cout << endl;
	
	
	// FILA CHEIA 
	if(fila[fim-1] != NULL){
		cout << "FILA CHEIA!!!" << endl;}
	cout << endl;
	
	//primeiro a sair  (10)
	cout << "saindo o 1º.........." << endl;
	cout << endl;
	saida();
	cout << endl;
	
	//segundo a sair  (10)
	cout << "saindo o 2º.........." << endl;
	cout << endl;
	saida();
	cout << endl;
	
	//terceiro a sair  (10)
	cout << "saindo o 3º..........." << endl;
	cout << endl;
	saida();
	cout << endl;

	//quarto a sair  (10)
	cout << "saindo o 4º..........." << endl;
	cout << endl;
	saida();
	cout << endl;
	 
	//quinto a sair  (10)
	cout << "saindo o 5º.............." << endl;
	cout << endl;
	saida();
	cout << endl;
	
	if(fila[fim] == NULL){
		cout << "FILA VAZIA!!!" << endl;}

	return 0;
}