#include <bits/stdc++.h>
#define pub push_back

using namespace std;

int main(void){
  int totalCasos;

  scanf("%d", &totalCasos);

  for(int u=0; u < totalCasos; u++){

    int verticeIn, vertices, arestas;
    scanf("%d %d %d", &verticeIn, &vertices, &arestas);

    vector < vector <int> > grafo (vertices, vector<int> (vertices, 0));
    int arestasTotal = arestas;

    for(int i=0; i < arestas; i++){
      int insere1, insere2;
      scanf("%d %d", &insere1, &insere2);

      if(grafo[insere1][insere2] == 1){
        arestasTotal--;
      }else{
        grafo[insere1][insere2]++;
        grafo[insere2][insere1]++;
      }
    }

    printf("%d\n", 2*arestasTotal );
  }


  return 0;
}
