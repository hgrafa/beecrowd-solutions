#include <bits/stdc++.h>
using namespace std;

int main(void){
  int inic, fim;
  long long int sum=0;

  scanf("%d %d", &inic, &fim);

  if(inic > fim){
    int temp;
    temp = inic;
    inic = fim;
    fim = temp;
  }

  for(int i=inic; i <= fim; i++){
    if(i%13==0)
      continue;
    else
      sum += i;
  }

  printf("%lld\n", sum);

  return 0;
}
