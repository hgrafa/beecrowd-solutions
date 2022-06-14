#include <bits/stdc++.h>
using namespace std;

int main(void){
  double n;

  scanf("%lf", &n);

  for(int i=0; i < 100; i++){
    printf("N[%d] = %.4lf\n", i, n);
    n /= 2;
  }
  
  return 0;
}
