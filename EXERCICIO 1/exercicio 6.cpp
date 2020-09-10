/*Escreva um programa em C++ que mostre o quadrado dos números inteiros
 no intervalo de 1 a 20.
*/ 
#include <iostream> 
using namespace std;

int main(int argc, char** argv)
{
	for (int i = 1; i < 21; i++) {
	cout << "o quadrado de " << i << " eh " << ( i*i ) << endl;
	}
	return 0;
}

