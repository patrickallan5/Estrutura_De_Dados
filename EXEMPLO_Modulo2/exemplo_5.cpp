#include <iostream>
#include <locale.h>

using namespace std;


void troca (int & num1, int & num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main() {
	setlocale(0, "");
	int num1 , num2, temp;
	cout << " Digite o numero 1: " << endl;
	cin >> num1;
	cout << " Digite o numero 2: " << endl;
	cin >> num2;
	
	
	cout << " Voce digitou os valores: " << num1 << " e " << num2 << endl;
	/*temp = num1;
	num1 = num2;
	num2 = temp;*/
	troca(num1,num2);
	cout << " os valores após a troca é: " << num1 << " e " << num2 << endl;
	return 0;


}

