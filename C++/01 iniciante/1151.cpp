#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  bool L = true;

  scanf("%d", &n);

  long long int v[n];

  for(int i = 0; i < n; i++){

    if(i == 0 or i == 1)
      v[i] = i;
    else
      v[i] = v[i-1] + v[i-2];

    if( L == true){
      printf("%lld", v[i]);
      L = false;
    }else{
      printf(" %lld", v[i]);
    }

  }

  printf("\n");

  return 0;
}
