#include <bits/stdc++.h>
using namespace std;

int main(void){
  double v[100];

  for(int i=0; i < 100; i++){
    scanf("%lf", &v[i]);

    if(v[i] <= 10)
      printf("A[%d] = %.1lf\n", i, v[i]);
  }

  return 0;
}
