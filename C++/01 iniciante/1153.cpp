#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  long long int r = 1;

  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    r *= i;
  }

  printf("%lld\n", r);

  return 0;
}
