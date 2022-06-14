#include <bits/stdc++.h>
using namespace std;

long long int fatorial(int n){
  long long int r=1;

  for(int i=1; i <= n; i++){
    r *= i;
  }

  return r;
}

int main(void){

  while( 1 ){
    int a, b;

    scanf("%d %d", &a, &b);

    if( !feof(stdin) )
      printf("%lld\n", fatorial(a)+fatorial(b));
    else
      break;
  }

  return 0;
}
