#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, lat, cop, r=0, i;

  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d %d", &lat, &cop);

    if(lat>cop)
      r += cop;

  }

  printf("%d\n", r);

  return 0;
}
