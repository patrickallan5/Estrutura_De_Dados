/* Em uma eleição presidencial existem dois candidatos. Os votos são
informados através de códigos. Os dados utilizados para a contagem dos
votos têm-se a seguinte codificação: 1,2= voto para os respectivos
candidatos; 3= voto nulo; 4= voto em branco; Elabore um programa em C++
que leia o código do candidato em um voto. Como finalizador do conjunto
de votos, tem-se o valor 0. Calcule e escreva: (1) percentual de votos para
cada candidato; (2) percentual de votos nulos; (3) percentual de votos em
branco;
*/


# include <iostream>
using namespace std;
	int cont_v1 = 0;
	int cont_v2 = 0;
	int cont_null= 0;
	int cont_branco = 0;
	int voto;
	int finalizar = 1;
int main(int argc, char** argv)
{

while (finalizar != 0){
		cout << "PARA CANDIDATO_1 DIGITE 1 " << endl;
		cout << "PARA CANDIDATO_2 DIGITE 2 " << endl;
		cout << "ANULLAR VOTO DIGITE 3" << endl;
		cout << "VOTO EM BRANCO DIGITE 4" << endl;
		cout << " " << endl;
		cin >> voto;
			
	switch(voto)
	{
	case 1:
		cont_v1++;
		cout << "VOTO CONCLUIDO " << endl;
		break;
	case 2:
		cont_v2++;
		cout << "VOTO CONCLUIDO " << endl;
		break;
	case 3:
		cont_null++;
		cout << "VOTO CONCLUIDO " << endl;
		break;
	case 4:
		cont_branco++;
		break;
		cout << "VOTO CONCLUIDO " << endl;
	default:
		cout << "valor inexistente." << endl;
		break;
	}													


	cout << " " << endl;
	cout << "FINALIZAR VOTACAO DIGITE 0 " << endl;
	cout << "PARA CONTINUAR ENRE COM 1 " << endl;
	cout << " " << endl;
	cin >> finalizar;
	cout << " " << endl;

}
	int total_voto =(cont_v1 + cont_v2 + cont_null + cont_branco);
	float p_v1 = ((cont_v1 * 100)/ total_voto);
	float p_v2 = ((cont_v2 * 100)/ total_voto);
	float  p_vn = ((cont_null * 100)/ total_voto);
	float p_vb = ((cont_branco * 100)/ total_voto);
	
	cout <<"percentual de voto para o candidato 1 eh " << p_v1 << " com " << cont_v1 << " votos " << endl;
	cout <<"percentual de voto para o candidato 2 eh " << p_v2 << " com " << cont_v2 << " votos " << endl;
	cout <<"percentual de voto nulos " << p_vn << " com " << cont_null << " votos " << endl;
	cout <<"percentual de voto em branco " << p_vb << " com " << cont_branco << " votos " << endl;
	return 0;
}