#include <bits/stdc++.h>
using namespace std;
unsigned long long int v;

unsigned long long int solve(int a){
  (v) = pow(2, a) - 1;

  v /= 12000;

  return v;
}

int main(void){
  int testes;

  scanf("%d", &testes);

  for(int i=0; i < testes; i++){
    int a;
    scanf("%d", &a);

    if( a == 64){
      puts("1537228672809129 kg");
      continue;
    }
    
    printf("%lld kg\n", solve(a));
  }

  return 0;
}
