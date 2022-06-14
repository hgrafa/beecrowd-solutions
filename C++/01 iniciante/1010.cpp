#include <stdio.h>

int main(){
  int C1, N1, C2, N2;
  double V1, V2, T1, T2;

  scanf("%d %d %lf", &C1, &N1, &V1);
  scanf("%d %d %lf", &C2, &N2, &V2);
  T1=V1*N1;
  T2=V2*N2;

  printf("VALOR A PAGAR: R$ %.2lf\n", T1+T2);

  return 0;
}
