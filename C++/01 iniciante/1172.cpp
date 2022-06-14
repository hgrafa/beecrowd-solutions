#include <bits/stdc++.h>
using namespace std;

int main(void){
  int v[10];

  for(int i=0; i < 10; i++){
    scanf("%d", &v[i]);

    if(v[i] <= 0)
      v[i] = 1;

    printf("X[%d] = %d\n", i, v[i]);
  }

  return 0;
}
