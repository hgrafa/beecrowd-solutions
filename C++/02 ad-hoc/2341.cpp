#include <bits/stdc++.h>

using namespace std;

int main(void){
  int balas, tipos;

  scanf("%d %d", &balas, &tipos);

  int envelopes[tipos];

  for(int i=0; i<tipos;i++)
    envelopes[i] = 0;
    
  for(int i=0;i<balas;i++){
    int insere;
    scanf("%d", &insere);
    envelopes[insere-1]++;
  }

  int menor = envelopes[0];

  for(int i=0;i<tipos;i++){
    if(envelopes[i] < menor)
      menor = envelopes[i];
  }

  printf("%d\n", menor);

  return 0;
}