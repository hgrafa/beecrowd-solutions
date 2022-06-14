#include <bits/stdc++.h>
using namespace std;

int main(void){
  int limit;

  scanf("%d", &limit);

  for(int i=0; i < 1000; i++){
    int temp = i;
    if(temp >= limit)
      temp = temp%limit;

    printf("N[%d] = %d\n", i, temp);
  }
}
