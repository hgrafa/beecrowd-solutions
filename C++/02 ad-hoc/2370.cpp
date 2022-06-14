#include <bits/stdc++.h>
using namespace std;

int main(void){
  int Njogadores, Ntimes;

  scanf("%d %d", &Njogadores, &Ntimes);

  vector < pair <int, string> > turma;
  vector < string > grupo[Ntimes];

  for(int i=0; i < Njogadores; i++){
    pair < int, string> par;
    cin >> par.second >> par.first;
    turma.push_back( par );
  }

  sort( turma.rbegin(), turma.rend() ); // funciona

  int cont = 0;
  for(int i=0; i < Njogadores; i++){

    if(cont == Ntimes)
      cont = 0;

    grupo[cont].push_back( turma[i].second );
    cont++;
  }           // funciona na compilação até agora

  for(int i=0; i < Ntimes; i++){
    sort( grupo[i].begin(), grupo[i].end() );
    printf("Time %d\n", i+1);
    for(int j=0; j < (int)grupo[i].size(); j++){
      cout << grupo[i][j] << "\n";
    }
    printf("\n");
  }

  return 0;
}
