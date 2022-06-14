#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
  int d=0;
  for(int i=1; i < n; i++){
    if(n%i == 0)
      d += i;
  }

  if(d == n)
    return true;
  else
    return false;
}

int main(void){
  int testes;

  scanf("%d", &testes);

  for(int i=0; i < testes; i++){
    int n;

    scanf("%d", &n);

    if( solve(n) )
      printf("%d eh perfeito\n", n);
    else
      printf("%d nao eh perfeito\n", n);

  }

  return 0;
}
