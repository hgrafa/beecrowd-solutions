#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, a, m;
  scanf("%d", &n);

  a = n/365;
  n -= 365*a;

  m = n/30;
  n -= 30*m;

  printf("%d ano(s)\n", a);
  printf("%d mes(es)\n", m);
  printf("%d dia(s)\n", n);

  return 0;
}
