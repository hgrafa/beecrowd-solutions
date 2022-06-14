	//------------------------------------------------------
	// Hugo Rafael de Lima
	// URI - iniciante
	// problema de Dijkstra

	//------------------------------------------------------

	#include <iostream>
	#include <cstdio>
	#include <cstdlib>
	#include <set>

	using namespace std;

	//------------------------------------------------------

	int main(void){

		string s;
		set <string> a;

		while(cin >> s){

			if(feof(stdin)){
				cout << a.size();
				break;
			}

			a.insert(s);

		}

		return 0;
	}

	//------------------------------------------------------
