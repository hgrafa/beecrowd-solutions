#include <bits/stdc++.h>
#define pub push_back
#define out erase
#define bgn begin
#define bs binary_search

using namespace std;

int main(){
  int Npessoas, Nfora;
  vector <int> identificador;
  vector <int> sai;

  scanf("%d", &Npessoas);

  for(int i=0;i<Npessoas;i++){
    int insere;
    scanf("%d", &insere);
    identificador.pub(insere);
  }

  scanf("%d", &Nfora);

  for(int i=0;i<Nfora;i++){
    int insere;
    scanf("%d", &insere);
    sai.pub(insere);
  }

  sort( sai.bgn() , sai.end());


  bool first = true;
  for(int i=0;i<(int)identificador.size();i++){

    bool test;
    test = bs( sai.bgn(), sai.end(), identificador[i] );
    //teste procura minha fila no sai

    if(test == true){ //se achar, tira
      continue;
      //printf("%d vai sair\n", identificador[i]);
      //identificador.out( identificador.bgn() + i);
    }else{
      if(first){ first = false;
        printf("%d", identificador[i]);
      }else
        printf(" %d", identificador[i]);
    //  printf("%d vai ficar\n", identificador[i]);
    }
  }

  //for(int i=0;i<(int)identificador.size(); i++)
  //  printf("%d ", identificador[i]);

  printf("\n");

  return 0;
}