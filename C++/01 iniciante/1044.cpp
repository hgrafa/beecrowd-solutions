#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;

  scanf("%d %d", &a, &b);

  if(a%b==0 or b%a==0)
    printf("Sao Multiplos\n");
  else
    printf("Nao sao Multiplos\n");

  return 0;
}
