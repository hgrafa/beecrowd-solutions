#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
  int d=0;
  for(int i=1; i <= n; i++){
    if(n%i == 0)
      d++;
  }

  if(d == 2)
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

    if( primo(n) )
      printf("%d eh primo\n", n);
    else
      printf("%d nao eh primo\n", n);
  }

  return 0;
}
