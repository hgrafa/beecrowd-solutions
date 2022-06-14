#include <stdio.h>
#include <stdlib.h>

int main(){
  int tot, n100, n50, n20, n10, n5, n2, n1;

  scanf("%d", &tot);

  n1 = tot;

  n100 = tot/100;
  tot -= 100*n100;

  n50 = tot/50;
  tot -= 50*n50;

  n20 = tot/20;
  tot -= 20*n20;

  n10 = tot/10;
  tot -= 10*n10;

  n5 = tot/5;
  tot -= 5*n5;

  n2 = tot/2;
  tot -= 2*n2;

  printf("%d\n", n1);
  printf("%d nota(s) de R$ 100,00\n", n100);
  printf("%d nota(s) de R$ 50,00\n", n50);
  printf("%d nota(s) de R$ 20,00\n", n20);
  printf("%d nota(s) de R$ 10,00\n", n10);
  printf("%d nota(s) de R$ 5,00\n", n5);
  printf("%d nota(s) de R$ 2,00\n", n2);
  printf("%d nota(s) de R$ 1,00\n", tot);

  return 0;
}