#include <bits/stdc++.h>
using namespace std;

int main(){
  int testes;

  scanf("%d", &testes);

  for(int i=0;i<testes;i++){
    double a, b, c, m;

    scanf("%lf %lf %lf", &a, &b, &c);

    m = 2*a+3*b+5*c;

    printf("%.1lf\n", m/10);
  }

  return 0;
}
