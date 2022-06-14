#include <bits/stdc++.h>
using namespace std;

int main(void){
  int v[20];

  for(int i=0; i < 20; i++)
    scanf("%d", &v[i]);

  for(int i=10; i < 20; i++){
    int temp;
    temp = v[19-i];
    v[19-i] = v[i];
    v[i] = temp;
  }

  for(int i=0; i < 20; i++){
    printf("N[%d] = %d\n", i, v[i]);  
  }

  return 0;
}
