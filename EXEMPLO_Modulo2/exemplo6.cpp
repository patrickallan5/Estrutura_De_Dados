#include <iostream>
#include <locale.h>

using namespace std;
void alterar(int &num1, int &num2)
{
	num1 =100;
	num2 = 200;
}
int main(int argc, char** argv)
{
	setlocale(0, "");
	
	int n1=0 , n2 =  0;
	
	cout	<< "entre com um numero: " << endl;
	cin >> n1;
	
	cout	<< "entre com  outro numero: " << endl;
	cin >> n2;
	
	cout	<< "primeiro numero: " << n1 << endl;
	cout	<< "segundo numero: " << n2 << endl;
	
	alterar(n1 , n2);
	
	cout	<< "após __________> primeiro numero: " << n1 << endl;
	cout	<< "após __________> segundo numero: " << n2 << endl;
	return 0;
}