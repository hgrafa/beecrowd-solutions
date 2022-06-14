//------------------------------------
// Hugo Rafael de Lima
// URI online jugde 2018
// problema dos companheiros de exército
//------------------------------------
// biliotecas e definições

#include <iostream>
#include <cstdio>

#define maxn 100010

using namespace std;

//------------------------------------
// estruturas do problema

struct squad{
	int l, r;
	// cada soldado tem idexado seus vizinhos
};

//------------------------------------
// variáveis globais

squad soldier[maxn];
int n, b;

//------------------------------------
// função principal

int main(void){

	while( scanf(" %d %d", &n, &b) ){

		if(not n and not b) break;

		//coloco indexado os vizinhos de cada um

		for(int i=1; i<=n; i++){
			soldier[i].l = i-1;
			soldier[i].r = i+1;
		}

		for(int i=0; i<b; i++){
			int a, b;

			scanf(" %d %d", &a, &b);

			soldier[ soldier[a].l ].r = soldier[b].r;
			soldier[ soldier[b].r ].l = soldier[a].l;

			if(soldier[ soldier[b].r ].l < 1) printf("*");
			else printf("%d", soldier[ soldier[b].r ].l);
		
			printf(" ");

			if( soldier[ soldier[a].l ].r > n) printf("*");
			else printf("%d", soldier[ soldier[a].l ].r);

			printf("\n");
		}

		puts("-");

	}

	return 0;
}

//------------------------------------