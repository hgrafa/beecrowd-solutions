#include <bits/stdc++.h>
using namespace std;

int main(){
  double a, media=0;
  int r=0;

  for(int i=0;i<6;i++){
    scanf("%lf", &a);
    if(a>0){
      r++;
      media += a;
    }

  }

  printf("%d valores positivos\n%.1lf\n", r, media/r);

  return 0;
}
