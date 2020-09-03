#include <iostream>
using namespace std;

int main(){
	int idade;	
	cout << "entre com sua idade" << endl;
	cin >> idade;	
	if (idade >= 5 &&  idade < 8){
		cout << "CATEGORIA  INFANTIL A" << endl;
		}
	else if (idade < 11){
		cout << "CATEGORIA INFANTIL B" << endl;
		}	 
	else if(idade < 14){
	cout << "CATEGORIA JUVENIL A" << endl;
	}
	else if (idade < 18){
	cout << "CATEGORIA JUVENIL B " << endl;
	}
	else {
		cout << "CATEGORIA SENIOR"	<< endl;
	}
	return 0;

}