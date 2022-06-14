//-------------------------------------------
// Hugo Rafael de Lima
// Codcad 2018 - data structs
// problem: Copa do mundo
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

//-------------------------------------------

queue <char> fila;
int n, m;

//-------------------------------------------

int main(void){

	fila.push('A');
	fila.push('B');
	fila.push('C');
	fila.push('D');
	fila.push('E');
	fila.push('F');
	fila.push('G');
	fila.push('H');
	fila.push('I');
	fila.push('J');
	fila.push('K');
	fila.push('L');
	fila.push('M');
	fila.push('N');
	fila.push('O');
	fila.push('P');

	for(int i=0; i < 15; i++){

		char time1, time2;

		time1 = fila.front();
		fila.pop();
		time2 = fila.front();
		fila.pop();

		scanf(" %d %d", &n, &m);

		if(n > m) fila.push(time1);
		else fila.push(time2);

	}

	printf("%c\n", fila.front());

	return 0;
}

//-------------------------------------------
