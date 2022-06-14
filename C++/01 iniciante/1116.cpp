#include <bits/stdc++.h>

using namespace std;

int main(void){
  int testes;

  scanf("%d", &testes);

  for(int i=0; i < testes; i++){
    double a, b;
    scanf("%lf %lf", &a, &b);

    if(b == 0){
      puts("divisao impossivel");
      continue;
    }

    printf("%.1lf\n", a/b);
  }

  return 0;
}
