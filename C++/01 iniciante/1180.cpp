#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, menor, posmenor;

  scanf("%d", &n);

  int v[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);

    if( i == 0){
      menor = v[i];
      posmenor = i;
    }

    if( v[i] < menor){
      menor = v[i];
      posmenor = i;
    }
  }

  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posmenor);

  return 0;
}
