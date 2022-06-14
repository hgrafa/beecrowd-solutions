#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, h, m;
  scanf("%d", &n);

  h = n/3600;
  n -= 3600*h;

  m = n/60;
  n -= 60*m;

  printf("%d:%d:%d\n", h, m, n);

  return 0;
}