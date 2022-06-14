#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, r;

  scanf("%d %d", &a, &b);

  r = b-a;

  if(r<=0)
    r += 24;

  printf("O JOGO DUROU %d HORA(S)\n", r);

  return 0;
}
