//----------------------------------------
//bibliotecas e definições

#include <iostream>
#include <cstring>
#define maxobjetos 10010
#define maxaguenta 10010
using namespace std;

//----------------------------------------
//variáveis globais

int dp[maxaguenta][maxobjetos];
int peso[maxobjetos], valor[maxobjetos];
int capacidade, Nobjetos;

//----------------------------------------
//função da melhor mochila

int mochila(int aguenta, int objeto){

	if(dp[aguenta][objeto] != -1) return dp[aguenta][objeto];
	//se eu já testei essa combinação na mochila

	if(aguenta == 0 or objeto > Nobjetos) return 0;
	//casos base: se eu não aguento mais objetos meu objetos terminam


	
	int caso1;
	//neste caso eu testo o objeto não entrando na mochila
	caso1 = mochila(aguenta, objeto+1);

	if(aguenta >= peso[objeto]){

		int melhor, caso2, caso3;
		
		// se a mochila aguentar testo o próximo na mochila
		caso2 = valor[objeto] + mochila(aguenta-peso[objeto], objeto+1);

		// se a mochila aguentar testo o mesmo na mochila
		caso3 = valor[objeto] + mochila(aguenta-peso[objeto], objeto);

		melhor = max(caso2, caso3);

		return ( dp[aguenta][objeto] = max(caso1, melhor) );
		//comparo as possibilidades e retorno a melhor
	}else
		return (dp[aguenta][objeto] = caso1);
		// neste caso só havia um caso possível, então o melhor é ele
}

//----------------------------------------

int main(void){
	int a = 1;

	while(cin >> Nobjetos >> capacidade){
		// leio a quantidade de obejtos e a capacidade da mochila

		cout << "\n";	

		if(Nobjetos == 0 and capacidade == 0) break;
		
		memset(dp, -1, sizeof(dp));
		memset(peso, 0, sizeof(peso));
		memset(valor, 0, sizeof(valor));
		// coloco todas as posições da dp como -1
	
		for(int i=1; i<=Nobjetos; i++) cin >> peso[i] >> valor[i];
		
		cout << "Instancia " << a << "\n";
		
		cout << mochila(capacidade, 1) << "\n";

		a++;	
	}

	return 0;
}

//----------------------------------------
