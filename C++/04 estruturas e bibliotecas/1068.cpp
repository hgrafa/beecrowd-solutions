//----------------------------------------------------
// Hugo Rafael de Lima
// URI - estruturas e bibliotecas
// problem: balanço de parenteses 1
//----------------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

//----------------------------------------------------
// variáveis globais

string s;

//----------------------------------------------------
// função que checa se é um parenteses abrindo

bool isopen(char a){

	if(a == '(') return true;

	return false;
}

//----------------------------------------------------
// função que checa se é um parenteses fechando

bool isclose(char a){

	if(a == ')') return true;

	return false;
}

//----------------------------------------------------

int main(void){

	while( getline(cin, s) ){

		stack <char> pilha;
		bool ok = true;

		for(char c: s){

			if( isopen(c) ){

				pilha.push(c);

			}else if( isclose(c) ){

				if(pilha.empty()) ok = false;

				pilha.pop();

			}

			if(not ok) break;

		}

		if(not pilha.empty()) ok = false;

		if( not feof(stdin) ){
			if(ok) puts("correct");
			else puts("incorrect");
		}else break;


	}

	return 0;
}

//----------------------------------------------------
