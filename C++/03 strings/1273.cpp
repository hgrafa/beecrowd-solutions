#include <bits/stdc++.h>
using namespace std;

int main(void){
  int Npalavras;

  bool L = false;

  while( scanf("%d", &Npalavras) and Npalavras != 0){
    if( L == true )
      printf("\n");

    string nomes[Npalavras];

    for(int i=0; i < Npalavras; i++){
      cin >> nomes[i];
    }

    int tamanho_oficial = nomes[0].size();

    for(int i=1; i < Npalavras; i++){
      if(nomes[i].size() > tamanho_oficial){
        tamanho_oficial = nomes[i].size();
      }
    }

    for(int i=0; i < Npalavras; i++){
      int tamanho_da_vez = nomes[i].size();

      while( tamanho_da_vez < tamanho_oficial ){
          printf(" ");
          tamanho_da_vez++;
      }

    cout << nomes[i] << "\n";

    }

    L = true;
  }

  return 0;
}
