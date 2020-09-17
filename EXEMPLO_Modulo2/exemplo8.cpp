
#include <iostream>
#include <locale.h>

using namespace std;

void mensagem (){
	cout << "sobrenome de Função " << endl;
}
void mensagem(int num){
	cout << " numero " << num << endl;
}

int main(int argc, char** argv)
{
	setlocale(0, "");
	
	mensagem();
	mensagem(10);
	
	return 0;
}
