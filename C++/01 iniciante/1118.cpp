#include <bits/stdc++.h>

using namespace std;

void solve(void){
  double num, media=0;
  int i = 0;

  while(i < 2){
    scanf("%lf", &num);

    if(num >= 0 and num <= 10){
      media += num;
      i++;
    }else{
      puts("nota invalida");
    }
  }

  printf("media = %.2lf\n", media/2);

}

int main(void){

  int continua = 1;

  while(continua != 2){

    if(continua == 1)
      solve();

    puts("novo calculo (1-sim 2-nao)");
    scanf("%d", &continua);

  }

  return 0;
}