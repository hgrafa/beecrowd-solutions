#include <bits/stdc++.h>
using namespace std;

int main(void){
  int testes;

  scanf("%d",  &testes);

  for(int i=0; i < testes; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", __gcd(a,b) );
  }

  return 0;
}
