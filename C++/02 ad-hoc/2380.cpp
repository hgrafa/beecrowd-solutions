//-----------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - Data Structs
// problem: Fusões 
//-----------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>

#define maxn 100010

using namespace std;

//-----------------------------------------
// Global Variables

int n, k, pai[maxn], peso[maxn];

//-----------------------------------------
// Find function 

int find(int i){

	// se sou meu pai
	if(pai[i] == i) return i;

	// senão busco meu ancestral e salvo
	return pai[i] = find(pai[i]);
}

//-----------------------------------------
// Union Function

// pai[find(i)] = find(j);

void merge(int x, int y){

	// trabalho diretamente com pais de quem vou juntar
	x = find(x);
	y = find(y);

	if(x == y) return;

	if(peso[x] > peso[y])
		pai[y] = x;
	else if(peso[y] > peso[x])
		pai[x] = y;
	else{
		pai[x] = y;
		peso[y]++;
	}

}

//-----------------------------------------
// The main function

int main(void){

	scanf(" %d %d", &n, &k);
	
	for(int i=1; i<=n; i++) pai[i] = i;

	for(int u=0; u<k; u++){
		char op;
		int a, b;

		scanf(" %c %d %d", &op, &a, &b);

		if(op == 'C'){

			if(find(a) == find(b)) // se houver o mesmo ancestral
				puts("S");
			else // se não possuem ancestral comum
				puts("N");

		}else if(op == 'F'){

			merge(a, b);

		}

	}	

	return 0;
}

//-----------------------------------------
