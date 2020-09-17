#include <iostream>
#include <locale.h>

using namespace std; 


int soma(int n1, int n2, int n3){
	return n1+ n2 + n3;	
}

int soma (int n1, int n2){
	return n1 + n2;
}


int main(int argc, char** argv)
{
	setlocale(0, "");
	
	cout << soma(10 ,20 )<< endl;
	cout << soma(10,20,30)<<endl;
	
	return 0;
}