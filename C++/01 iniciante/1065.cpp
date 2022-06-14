#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  int r=0;

  for(int i=0;i<5;i++){
    scanf("%d", &a);
    if(a%2==0)
      r++;

  }

  printf("%d valores pares\n", r);

  return 0;
}
