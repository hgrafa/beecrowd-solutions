#include <bits/stdc++.h>
using namespace std;

int main(void){
  int testes, inic, fim;

  scanf("%d", &testes);

  if(inic > fim){
    int temp;
    temp = inic;
    inic = fim;
    fim = temp;
  }

  for(int i = 0; i < testes; i++){
    int sum = 0;
    scanf("%d %d", &inic, &fim);

    if(inic > fim){
      int temp;
      temp = inic;
      inic = fim;
      fim = temp;
    }

    for(int j = inic+1; j < fim; j++){
      if( j%2 != 0){
        sum += j;
      }
    }

    printf("%d\n", sum);
  }

  return 0;
}