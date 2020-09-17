#include <iostream>
#include <locale.h>

using namespace std;


// prototipo da funcao 
bool par(int num);
void mensagem();

int main()
{
	setlocale(0, "");
	
	int num = 0 ;
	
	mensagem();
	
	cout << "entre com um numero: ";
	cin >> num;
	
	if (par(num)){
		cout << "O numero " << " e par " <<endl;
	}
	else{
		cout << "O numero "<< " e inpar " <<endl;
	}
	return 0;
}
bool par(int num){
	if (num % 2 == 0){
		return true;
	}else
	{
		return false;
	}
}
void mensagem (){ cout <<"aula de ED modulo 2" << endl;}