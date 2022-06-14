#include <bits/stdc++.h>
#define max 100000
#define pub push_back

using namespace std;

int vertices, arestas;
vector <int> grafo[max];
int mrc[max];

void dfs(int x){
  mrc[x] = 1; // marco a linha da lista
  for(int i = 0 ; i < (int)grafo[x].size() ; i++){
    // vou percorrer a linha da lista
    int guardaVertice = grafo[x][i];

    if(mrc[ guardaVertice ] == 0){
      dfs(guardaVertice);
      // se não foi visitado
      // faço uma recursiva e faço uma nova busca em escala menor
    }

  }

  mrc[x] = 2; // totalmente explorado
}

int main(void){

  int count =0;
  scanf("%d %d", &vertices, &arestas);

  for(int i=0;i<arestas;i++){
    int insere1, insere2;
    scanf("%d %d", &insere1, &insere2);

    grafo[insere1].pub(insere2);
    grafo[insere2].pub(insere1);

  }  //insere

  for(int i=1;i<=vertices;i++){
    if(mrc[i] == 0){
      count++;
      dfs(i);
    }
  }

  printf("%d\n", count);
  return 0;
}