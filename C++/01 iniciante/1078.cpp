#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;

  scanf("%d", &n);

  for(int i=1;i<11;i++){
    printf("%d x %d = %d\n", i, n, n*i);
  }

  return 0;
}
