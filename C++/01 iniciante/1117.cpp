#include <bits/stdc++.h>

using namespace std;

int main(void){
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

  return 0;
}
