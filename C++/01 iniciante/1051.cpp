#include <bits/stdc++.h>
using namespace std;

int main(){
  double vlr, pg=0;

  scanf("%lf", &vlr);

  if(vlr>=0 and vlr<=2000){
    printf("Isento\n");
    return 0;
  }


    if(vlr-4500 > 0){
      pg += 0.28*(vlr-4500);
      vlr  = 4500;
    }

    if(vlr-3000 > 0){
      pg += 0.18*(vlr-3000);
      vlr = 3000;
    }

    if(vlr-2000>0){
      pg += 0.08*(vlr-2000);
      vlr = 0;
    }

  printf("R$ %.2lf\n", pg);

  return 0;
}
