#include <bits/stdc++.h>
using namespace std;

int main(){
  double tip, q;

  scanf("%lf %lf", &tip, &q);

  if(tip ==1)
    printf("Total: R$ %.2lf\n", 4*q);
  else if(tip == 2)
    printf("Total: R$ %.2lf\n", 4.50*q);
  else if(tip==3)
    printf("Total: R$ %.2lf\n", 5*q);
  else if (tip==4)
    printf("Total: R$ %.2lf\n", 2*q);
  else
    printf("Total: R$ %.2lf\n", 1.50*q);

  return 0;
}
