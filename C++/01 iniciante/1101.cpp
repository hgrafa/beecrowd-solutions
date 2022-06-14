#include <bits/stdc++.h>
using namespace std;

int main(void){
  int inic, fim;

  while( scanf("%d %d", &inic, &fim) ){
    if( inic<=0 or fim<=0)
      break;

    if(inic > fim){
      int temp;
      temp = inic;
      inic = fim;
      fim = temp;
    }

    int sum = 0;

    for(int i=inic; i <= fim; i++){
      printf("%d ", i);
      sum += i;
    }

    printf("Sum=%d\n", sum);
  }

  return 0;
}