#include <bits/stdc++.h>

using namespace std;

int main(void){
  int inic, fim;

  scanf("%d %d", &inic, &fim);

  if(inic > fim){
    int temp;
    temp = fim;
    fim = inic;
    inic = temp;
  }

  for(int i = inic+1; i < fim; i++){
    if(i%5 == 2 or i%5 == 3)
      printf("%d\n", i);
  }

  return 0;
}
