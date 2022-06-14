#include <iostream>
#define maxn 1010

using namespace std;

//--------------- declaro variáveis -------------------

int matriz[maxn][maxn], l, c, tquad;
long long maior=-2;

//---- função pra testar se o quadrado é válido -------

// NÃO PRECISO, TESTO SE ELE É VÁLIDO NA SOMA
// SE NÃO FOR FALO QUE A SOMA É -1

//---- função pra retornar a soma do quadrado ---------

int soma(int x, int y){

	// é válido ?? se não for retorno -1 pra soma
	// qual a soma??

	int sum = 0;

	bool carro = false, moto = false;

	for(int i=x; i<(tquad+x); i++){
		for(int j=y; j<(tquad+y); i++){
			if(matriz[i][j] == 25) carro = true;

			if(matriz[i][j] == 12) moto = true;

			sum += matriz[i][j];
		}
	}	

	cout << "soma deu " << sum << "\n";

	if(carro and moto) return sum;
	else return -1;
}

//-------------- função principal --------------------

int main(void){

	ios_base::sync_with_stdio(false);

	cin >> l >> c; // entro com os tamanhos da matriz


	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			char a;

			cin >> a;

			if(a == 'C') matriz[i][j] = 25;
			else matriz[i][j] = 12;
		}
	}

	cin >> tquad; // o tamanho do quadrado que vou buscar a soma maxima

	// #DEBUG

	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			cout << matriz[i][j] << " ";
		}

		cout << "\n";
	}

	for(int i=0; i<(l-tquad+1); i++){
		for(int j=0; j<(c-tquad+1); j++){
			long W = soma(i, j);

			if(W > maior) maior = W;
		}
	}

	cout << maior << "\n";

	return 0;
}
