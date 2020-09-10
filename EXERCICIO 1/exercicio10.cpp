/*Em um cinema, certo dia, cada espectador respondeu a um questionário,
que perguntava a sua idade (ID) e a opinião em relação ao filme (OP),
seguindo os seguintes critérios:

 OP : 1  otimo, 2 bom, 3 regular, 4ruim
 
Ao final da pesquisa será indicado quando a idade do usuário for informada
como negativa (idade inexistente). Construa um programa em C++ que, lendo
esses dados, calcule e apresente:
A. Quantidade de pessoas que respondeu a pesquisa
B. Média de idade das pessoas que responderam a pesquisa
C. Porcentagem de cada uma das respostas*/

#include <iostream>
using namespace std;
int cont1 , cont2, cont3, cont4;
float p1, p2, p3, p4;
int OP;
int ID;
int fim;
int contador = 0;
float mediaID;
int somador =0;
int main(int argc, char** argv)
{
	fim = 1;
	while(fim != 0)
	{
		int a = 1;
		while( a != 0 )
		{
			cout << " QUAL SUA IDADE " << endl;
		cin >> ID;
		if (ID < 0 ){
			cout << "idade inexistente" << endl;
		}else 
		break;
		
		}
	
		cout << "" << endl;
		cout << "QUAL SUA OPINIAL SOBRE O FILME " << endl;
		cout << "" << endl;
		cout << " OPCOES " <<endl;
		cout << " _______________" << endl;
		cout << " 1 OTIMO" <<endl;
		cout << " 2 BOM" <<endl;
		cout << " 3 REGULAR" <<endl;
		cout << " 4 RUIM " <<endl;
		cout << "" << endl;
		cin >> OP;

		switch(OP)
		{
		case 1 :
			contador++;
			cont1++;
			break;
		case 2 :
			contador++;
			cont2++;
			break;
		case 3 :
			contador++;
			cont3++;
			break;
		case 4 :
			contador++;
			cont4++;
			break;
		default:
			cout	<< "opcao invalida" << endl;
			cout	<< "reiniciando questionario" << endl;
			cout 	<< " " << endl;
			
			continue;
		}
		somador = somador +ID ;
		
		cout << "finalizar pesquisa, digite 0 ?" << endl;
		cin >> fim ;
			cout 	<< " " << endl;
	}
	mediaID = somador/contador;
	p1 = (cont1 * 100/contador);
	p2 = (cont2 * 100/contador);
	p3 = (cont3 * 100/contador);
	p4 = (cont4 * 100/contador);
	
	cout << contador << " PESSOAS RESPONDERA A PESQUISA" << endl;
	cout << mediaID << " FOI A MEDIA DE IDADES DOS PARTICIPANTES" << endl;
	cout << p1 << "% responderam otimo" << endl;
	cout << p2 << "% responderam bom" << endl;
	cout << p3 << "% responderam regular" << endl;
	cout << p4 << "% responderam ruim" << endl;
	return 0;
}