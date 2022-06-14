#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;

  while( scanf("%d", &n) and n!=0){
    int cont = 0, sum = 0;

    while(cont < 5){
      if(n%2 == 0){
        sum += n;
        n += 2;
        cont++;
      }else{
        n++;
      }
    }

    printf("%d\n", sum);

  }

  return 0;
}
