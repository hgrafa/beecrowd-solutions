#include <bits/stdc++.h>
using namespace std;

int main(){
  int v[3], vcop[3];

  for(int i=0;i<3;i++){
    scanf("%d", &v[i]);
    vcop[i]=v[i];
  }

  sort(v, v+3);

  for(int i=0;i<3;i++)
    printf("%d\n", v[i]);

  printf("\n");

  for(int i=0;i<3;i++)
    printf("%d\n", vcop[i]);

  return 0;
}
