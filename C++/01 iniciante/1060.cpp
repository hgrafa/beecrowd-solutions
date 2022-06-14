#include <bits/stdc++.h>
using namespace std;

int main(){
  double a;
  int r=0;

  for(int i=0;i<6;i++){
    scanf("%lf", &a);
    if(a>0)
      r++;
  }

  printf("%d valores positivos\n", r);

  return 0;
}
