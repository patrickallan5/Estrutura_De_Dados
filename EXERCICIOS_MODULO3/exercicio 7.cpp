#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char * * argv) {
	setlocale(0, "");
	// criando as vetor de inteiros
	int num[10] = {10,20,30,40,50,60,70,80,90,100};
	
	//impressao normal usando ponteiro 
	cout <<"impressao normal usando ponteiro "<< endl;
	for (int i=0; i < 10; i++){
		int* pnum = &num[i];
		cout<< *pnum << ", " ;
	}
	cout << endl;
	//impressao inversa usando ponteiro
	cout <<"impressao inversa usando ponteiro "<< endl;

	for ( int i = 9; i >= 0; i--) {
		int* pnum = &num[i];
		cout<< *pnum << ", " ;
}
	return 0;
}
