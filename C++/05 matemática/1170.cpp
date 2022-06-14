#include <bits/stdc++.h>
using namespace std;

int solve( double n){
  int cont = 0;

  while(n > 1){
    n /= 2;
    cont++;
  }

  return cont;
}

int main(void){
  int testes;

  scanf("%d", &testes);

  for(int i=0; i < testes; i++){
    double n;
    scanf("%lf", &n);
    printf("%d dias\n", solve(n));
  }

  return 0;
}
