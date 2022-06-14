#include <bits/stdc++.h>
using namespace std;

int main(){
  int inic, fim, tot=0;

  scanf("%d %d", &inic, &fim);

  if(inic>fim){
    int temp;
    temp = fim;
    fim = inic;
    inic = temp;
  }

  //printf("inicio: %d\n", inic );
  //printf("fim: %d\n", fim);

  for(int i=inic+1;i<fim;i++){
    if(i%2 != 0)
      tot += i;

  }

  printf("%d\n", tot);

  return 0;
}
