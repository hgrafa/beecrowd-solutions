	#include <stdio.h>
#include <stdlib.h>

int main(){
  int k;
  double p;

  scanf("%d %lf", &k, &p);

  printf("%.3lf km/l\n", k/p);

  return 0;
}
