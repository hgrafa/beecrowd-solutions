#include <bits/stdc++.h>
using namespace std;

int main(void){
  double id, sum = 0, cont = 0;

  while( scanf("%lf", &id) and id >= 0){
    sum += id;
    cont++;
  }

  printf("%.2lf\n", sum/cont);

  return 0;
}
