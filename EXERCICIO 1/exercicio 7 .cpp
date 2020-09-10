/* Escreva um programa em C++ que escreva todos os números múltiplos de 5,
no intervalo de 1 a 500. */ 

#include <iostream>

using namespace std; 


int main(int argc, char** argv)

{
	for (int i= 1; i< 501; i++){
		int num = (i % 5);
		if (num  == 0 )
			cout << i << " eh multiplo de 5 " << endl;	
			continue;
	}
	return 0;
}