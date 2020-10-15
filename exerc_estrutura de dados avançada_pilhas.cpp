#include <iostream>
#include <locale.h>
using namespace std;
// criando as variaveis e vetores(pilha)
int n = NULL;
int num=0;
int pilha[5];
int i = 0;
// criando metodo insercao
int insercao (){
	if(pilha[4] != NULL){
		cout << "PILHA CHEIA" << endl;
	}else{
		pilha[i] =num;
	    i++;
	    for ( int f = i - 1; f >= 0; f--){
			cout << pilha[f] << "," << endl;
		}
  	  
	};
}
// criando metodo retirada
int retirada (){
	if(pilha[0] == NULL){
		cout << "PILHA VAZIA" << endl;
	}else{
		pilha[i-1]= NULL;
		i--;
		for ( int f = i - 1; f >= 0; f--){
			cout << pilha[f] << "," << endl;
		}
	};
}


int main(int argc, char** argv)
{
	setlocale(0, "");
	if(pilha[0] == NULL){
		cout << "PILHA VAZIA" << endl;}
	// empilhando (10)
	num = 10;
	cout << "empilando 10 " << endl;
	cout << endl;
	insercao();
	cout << endl;
	
	// empilhando (5)
	num = 5;
	cout << "empilando 5 " << endl;
	cout << endl;
	insercao();
	cout << endl;
	
	//empilhando (15)	
	num = 15;
	cout << "empilando 15 " << endl;
	cout << endl;
	insercao();
	cout << endl;
	
	
	//desimpilhando (15)
	cout << "desemplilando" << endl;
	cout << endl;
	retirada();
	cout << endl;
	
	//empilhando (25)	
	num = 25;
	cout << "empilando 25 " << endl;
	cout << endl;
	insercao();
	cout << endl;
	
	
	
	// incrementando mais itens 
		num = 18;
	cout << "empilando 18 " << endl;
	cout << endl;
	insercao();
	cout << endl;
	
		num = 41;
	cout << "empilando 41 " << endl;
	cout << endl;
	insercao();
	cout << endl;
	
		num = 60;
	cout << "empilando 60 " << endl;
	cout << endl;
	insercao();
	cout << endl;

	return 0;
}