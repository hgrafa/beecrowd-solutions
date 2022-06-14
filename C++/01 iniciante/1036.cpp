#include <bits/stdc++.h>

int main(){
  double a, b, c, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);

  double delt;

  delt = b*b-4*a*c;

  if(delt<0 || a==0)
    printf("Impossivel calcular\n");
  else{

    r1 = -b+sqrt(delt);
    r2 = -b-sqrt(delt);

    printf("R1 = %.5lf\n", r1/(2*a));
    printf("R2 = %.5lf\n", r2/(2*a));

  }



  return 0;
}
