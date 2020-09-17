#include <iostream>
#include "my_math.h"

using namespace std;
int main(int argc, char** argv)
{
	int n = 0, b =0, a= 0;
	
	cout << " entre com um numero " ;
	cin >> n;
	cout << " digite a base " ;
	cin >> b;
	cout << " digite a altura " ;
	cin >> a;
	
	cout << "fatorial deo numero " << n << " : " << fatorial(n) << endl;
	cout << "area do quadrado  " << n << " : " << areaQuadrado(n) << endl;
	cout << "fatorial deo numero " << n << " : " << areaRetangulo(b ,a ) << endl;
	return 0;
}