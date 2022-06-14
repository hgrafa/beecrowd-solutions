#include <bits/stdc++.h>
using namespace std;

int main(void){
	int inic, fim;

	while( scanf("%d %d", &inic, &fim) && inic != fim){

		if(inic > fim){
			puts("Decrescente");
		}else if(fim > inic){
			puts("Crescente");
		}

	}

	return 0;
}
