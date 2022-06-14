#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;

  scanf("%d", &n);

  for(int i=0; i<=n; i++)
    if(i%2!=0)
      printf("%d\n", i);

  return 0;
}
