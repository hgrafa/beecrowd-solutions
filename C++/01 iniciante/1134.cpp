#include <bits/stdc++.h>
using namespace std;

int main(void){
  int test, alc=0, gas=0, die=0;

  while(scanf("%d", &test) and test != 4){

    if(test == 1)
      alc++;
    else if(test == 2)
      gas++;
    else if(test == 3)
      die++;

  }

  puts("MUITO OBRIGADO");
  printf("Alcool: %d\n", alc);
  printf("Gasolina: %d\n", gas);
  printf("Diesel: %d\n", die);

  return 0;
}
