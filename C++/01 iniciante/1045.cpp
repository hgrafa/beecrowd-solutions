#include <bits/stdc++.h>
using namespace std;

int main( void ){
  int a, b, count=0;

  scanf("%d %d", &a, &b);

  int L = true;
  for(int i=1; i <= b; i++){
    if(L == true){
      printf("%d", i);
      L = false;
    }else{
      printf(" %d", i);
    }

    count++;

    if( count == a){
      printf("\n");
      L=true;
      count = 0;
    }
  }

  return 0;
}
