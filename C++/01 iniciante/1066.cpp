#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  int rpos=0, rneg=0, rpar=0, rimp=0;

  for(int i=0;i<5;i++){
    scanf("%d", &a);

    if(a>0)
      rpos++;

    if(a<0)
      rneg++;

    if(a%2==0)
      rpar++;

    if(a%2!=0)
      rimp++;
  }

  printf("%d valor(es) par(es)\n", rpar);
  printf("%d valor(es) impar(es)\n", rimp);
  printf("%d valor(es) positivo(s)\n", rpos);
  printf("%d valor(es) negativo(s)\n", rneg);

  return 0;
}