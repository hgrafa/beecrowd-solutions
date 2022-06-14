#include <bits/stdc++.h>
using namespace std;

int main(void){
  int i = 0 , n, testes;

  scanf("%d", &testes);

  while(i < testes){
    int cont = 0, sum = 0, Ncont;

    scanf("%d %d", &n , &Ncont);

    while(cont < Ncont){
      if(n%2 != 0){
        sum += n;
        n += 2;
        cont++;
      }else{
        n++;
      }
    }

    printf("%d\n", sum);
    i++;
  }

  return 0;
}
